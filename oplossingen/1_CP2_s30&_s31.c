#include <stdio.h>

void print_adress(int x);
int *new_integer(void);

int main()
{
	int var = 0;
	
	// dia 30
	printf("%%p == %p\t%%d == %d\r\n", &var, &var);
	print_adress(var);
	
	// dia 31
	printf("%%p == %p", new_integer());
	
	return 0;
}

/*
4: Maak een simple functie “print_adres(int x)” met als enigste doel 
het adres te printen van de formele parameter x. In main maak je een 
integer variabele, print zijn adres zonder gebruik te maken van de 
functie, dan geef je deze door aan de functie  aan een geeft deze door 
aan print_adres.

Vergelijk de adressen, is het resultaat wat je verwacht?
	Ja omdat de functie een "Copy" maakt van x en dus niet het origineel 
	behoud.
	
	Dit noemt call by value.

Maak gebruik van de format specifier %p en vergelijk dit met de %d 
specifier.
*/
void print_adress(int x)
{
	printf("%%p == %p\t%%d == %d\r\n", &x, &x);
	
	return;
}

/*
5: Maak een functie “new_integer(void)” die een integer variabele declareerd 
en initialiseerd  en het adres returned van deze integer.
In de main functie print je dit geheugenadres uit.

Is dit legale C-code?
Geeft de compiler waarschuwingen als je met de optie –Wall compiled ?
Is dit veilig om te doen? Zoniet weet je een veiligere manier?

30.c: In function 'new_integer':
30.c:56:9: warning: function returns address of local variable [-Wreturn-local-addr]

Sinds we de variabele in de functie zelf aanmaken bestaat deze enkel in de functie scope.
Zodra we eruit gaan ruimt C alles in deze functie op en verdwijnt de variabele.

een veiligere manier zou zijn om een functie gelijk malloc te gebruiken die de groote van een int
aan geheigen zou alloceren en het begin adres hiervan terug geven.
*/
int *new_integer(void)
{
	int var = 42;
	
	return &var;
	// Veiligere manier.
	// return malloc(sizeof(int));
}
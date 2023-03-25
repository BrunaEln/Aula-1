#include <stdio.h>
//Cálculo da área de um círculo.

int main () {
	float r, area; 
	printf ("Digite o valor do raio do círculo:\n ");
	scanf ("%f", &r);
	area = 3.14 * (r * r);
	printf ("\nA área da circunferência equivale a %.2f cm2.", area);
}
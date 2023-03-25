#include <stdio.h>

//Valor da mercadoria e seu percentual de lucro.

int main () {
	float mer, frete, adicional, totvalor, lucro, perlucro;

	printf ("Diga o valor da sua mercadoria:\nR$");
	scanf ("%f", &mer); 

	printf ("\nAgora digite o valor do frete:\nR$");
	scanf ("%f", &frete);

	printf ("Digite o valor das despesas adicionais (caso haja): ");
	scanf ("%f", &adicional);

	totvalor = mer + frete + adicional;

	printf ("O valor bruto do produto é R$ %.2f \n. Adicione o valor da venda", totvalor);
	scanf ("%f", &totvalor);

	lucro = mer - totvalor;
	perlucro = (lucro / totvalor) * 100;
	printf ("%f", perlucro);

}
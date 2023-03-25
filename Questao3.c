#include <stdio.h>

//Cálculo de latas necessárias para pintar uma parede.

int main () {
	float mq, larg, alt, ml; //variáveis: metro quadrado, largura, altura, mililitro. 
	int latas;

	printf ("Me diga a largura da sua parede (em metros):\n ");
	scanf ("%f", &larg);

	printf ("Agora, digite a altura dela (em metros):\n ");
	scanf ("%f", &alt);

	mq = larg * alt;
	ml = mq * 300;
	latas = ml/2000;

	printf ("\nCom a parede medindo %.2f m2, e necessario %d latas de tinta para pinta-la.", mq, latas);
}
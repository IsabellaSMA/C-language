#include <stdio.h>

int main()
{
	short int idade=18;
	float salario= 7500.0f;
	double qtd_atomos=123456789123.0;
	char genero='F';
	float altura= 1.63;

	printf("\nIdade: %d",idade);
	printf("\nSalário: %.2f",salario);
	printf("\nQuantidade de átomos: %lf",qtd_atomos);
	printf("\nGênero: %c",genero);
	printf("\nAltura: %.2f\n",altura);
	return 0;
}

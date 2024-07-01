#include <stdio.h>
int main()
{
	char nome[20];
	printf("Digite seu nome: ");
	gets(nome);
	printf("\n\n Seu nome: %s", nome);
	return 0;
}

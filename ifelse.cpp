#include <stdio.h>
int main()
{
	int num;
	printf("Este programa informa se o numero e maior ou menor que 9");
	printf("Digite um numero a ser analisado: ");
	scanf("%d", &num);
	{
	if (num > 9)
	printf("\nO numero e maior que nove!!!");
	else
	printf("\nO numero nao e maior que nove!!!");
	}
	return 0;
}

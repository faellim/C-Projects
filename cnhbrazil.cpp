#include <stdio.h>
int main ()
{
	int idade;
	printf("Informe a sua idade: ");
	scanf("%d", &idade);
	{
		if (idade > 18 && idade <=100)
		printf("Voce pode tirar a sua CNH");
		else
		printf("Voce nao pode tirar a sua CNH!");
	}
	return 0;
}

#include <stdio.h>
#include <conio.h>
int main ()
{
	int num1,num2;
	char ch='\0';
	printf("Este programa faz a soma de dois numeros inteiros ate que o usuario digite N no flag");
	while(ch!= 'N' && ch!= 'n')
	{
		printf("\nDigite o pimeiro numero inteiro:");
		scanf("%d", &num1);
		printf("\nDigite o segundo numero inteiro:");
		scanf("%d", &num2);
		printf("\nA soma %d + %d eh: %d",num1 , num2 , num1+num2);
		printf("\nDeseja realizar uma nova soma? (S/N):");
		ch = getche();
	}
	return 0;
}

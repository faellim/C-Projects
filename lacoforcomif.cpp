#include <stdio.h>
int main ()
{
	int i;
	printf("\nEste programa retorna todos os numeros pares de 1 a 100\n");
	for(i=1; i<=100; i++)
	{
		if (i%2==0)
		{
			printf("\n%d\n", i);
		}
	}
	printf("\nos numeros estao acima");
	return 0;
}

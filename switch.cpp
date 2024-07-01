#include <stdio.h>
int main()
{
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	switch (num)
	{
		case 5:
			printf("Voce e muito inteligente");
			break;
			case 7:
				printf("voce tem muita sorte");
			break;
				default:
					printf("Voce e inteligente porem e azarado");
			break;
	}
	return 0;
}

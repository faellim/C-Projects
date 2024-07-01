#include <stdio.h>
#include <string.h>
#include <locale.h>
int main ()
{
	setlocale(LC_ALL, "portuguese");
	char str[12];
	printf("Digite seu nome e sobrenome:");
	fgets(str, sizeof(str), stdin);
	printf("\nO seu nome é: %s", str);
	return 0;
}

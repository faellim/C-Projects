#include <stdio.h>
#include <locale.h>
int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int x=1;
	do
	{
		printf("\n%d", x);
		x++;
	}
	while (x<100);
}

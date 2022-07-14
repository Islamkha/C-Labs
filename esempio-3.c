#include <stdio.h>

int main ()
{
	int numero;
	printf(" Inserice un numero\n");
	scanf("%d",&numero);
	if (numero > 0)
	{
		
		printf("Il numero inserito e Positivo\n");
	}
	else if (numero < 0 )
	{
		
		printf("Il numero inserito e negativo\n");
	}
	else
	{
		printf(" Zero\n");
	}

	return 0;
} 

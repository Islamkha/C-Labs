#include <stdio.h>

int main ()
{
	/* Dichiarazioni del Variabile */
	
	int numero;
	
	/* chiedere l'utente di inserire un numero */
	
	printf(" Inserice un numero\n");
	scanf("%d",&numero);
	
	/* Controllare se il numero e positivo o negativo o zero */
	
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

#include <stdio.h>

int main ()
{
	/* Dichiarazione Variabili*/
	int numero; 
	int incremento;
	int decremento;
	printf(" Inserice un numero\n");
	scanf("%d",&numero);
	printf(" Il numero inserito e:%d\n",numero);
	printf(" L'incerimento del numero e:%d\n", numero+1, &incremento);
	printf(" Il decrimento del numero e: %d\n", numero-1,&decremento);
	return 0;
}

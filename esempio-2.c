#include <stdio.h>

int main ()
{
	int numero1, numero2;
	float media;
	printf(" Inserice primo numero\n");
	scanf("%d",&numero1);
	printf(" Inserice secondo numero\n");
	scanf("%d",&numero2);
	media = (numero1 + numero2)/2;
	printf("Il medio e:%f\n", media);


	return 0;
}

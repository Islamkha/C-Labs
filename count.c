#include <stdio.h>  
int main()  
{  
	int numero;  // variable declaration  
	int counter;   // variable declaration  
	float somma;
	float media;


		/* Numero iniziale da mettere nel intnumero */

	printf("Inserisce un numero\n");  
	scanf("%d",&numero);  

		/* while per creare un loop (seriedi numeri) */
		/* termina quando inserisce 0 (numero!=0) */ 

	while(numero != 0)  
	{  

	somma = somma + numero; //al inizio la somma e vuota quindi 
				// facciamo   la funzione per tenere la somma.

	counter++; //accumulazione del conta


		/* inserire la serie di numeri*/
	printf("inserisce un numero:\n");
	scanf("%d", &numero);
}    

		/* il calcolo della media */

	media = somma/counter;

		/* Il risoltato */

	printf("Hai Inserito: %d numeri\n", counter);
	printf("La somma dei numeri e: %f\n",somma);
	printf("La media dei numeri e: %f\n", media);

	return 0;  
} 

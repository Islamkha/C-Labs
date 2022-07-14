#include <stdio.h>

int main ()
{
                /* Dichiarazioni variabili Int per calcolare la somma*/
        
        int primo, secondo, somma;

                /* Inserimento dei Numeri interi */
        printf(" Inserisci i numeri per calcolare la somma\n");
        printf(" primo numero\n");
        scanf("%d",&primo);
        printf(" secondo numero\n");
        scanf("%d",&secondo);

                /* Calcolare la somma */
       
	   somma = primo+secondo;
        
                /* stampa la somma */

        printf("La somma dei numeri indecati e:%d\n", somma);

               /*Dichiarazioni variabili per calcolare la media */
        
        int numero1, numero2;
        
        float somma2, media;
        
                /* Inserimento dei Numeri interi */
        
	printf(" Inserisci i numeri per calcolare la media\n");
        printf(" primo numero\n");
        scanf("%d",&numero1);
        printf(" secondo numero\n");
        scanf("%d",&numero2);

              /* Trasferimento della somma a Float */

        somma2 = numero1+numero2;
        
                /* Calcolare la media */

        media = somma2/2;
        
                /* stampa la media */

        printf("Il medio e:%f\n", media);

        return 0;
}

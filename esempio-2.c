#include <stdio.h>

int main ()
{
                /* Dichiarazioni Numeri Int */
        
        int numero1, numero2;

                /* Dichiarazioni Variabili Float */
        
        float somma, media;
        
                /* Inserimento dei Numeri interi */
        
        printf(" Inserice primo numero\n");
        scanf("%d",&numero1);
        printf(" Inserice secondo numero\n");
        scanf("%d",&numero2);

              /* Trasferimento della somma a Float */

        somma = numero1+numero2;
        
                /* Calcolare la media */

        media = somma/2;
        
                /* stampa la media */

        printf("Il medio e:%f\n", media);

        return 0;
}

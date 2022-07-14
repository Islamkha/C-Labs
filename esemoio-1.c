#include <stdio.h>

int main ()
{
                /* Dichiarazione dei variabili */

        int numero; // numero preso da inpu da tastiera
        int incremento;
        int decremento;

                /* chiedere l'utente di inserire il numero */

        printf(" Inserice un numero\n");
        scanf("%d",&numero);

                /* Incremento e decremento del valore */

        incremento = numero +1;
        decremento = numero -1;

                /*  stampa dei risoltati */

        printf(" Il numero inserito e:%d\n",numero);
        printf(" L'incerimento del numero e:%d\n", incremento);
        printf(" Il decrimento del numero e: %d\n", decremento);

        return 0;
}

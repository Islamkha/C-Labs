#include <iostream>
using namespace std;

int main()
{
	/*Dichiarazioni variabili per calcolare la media */
        
        int numero1=0;
	int numero2=0;
        float somma=0;
        float media=0;
        
                /* Inserimento dei Numeri interi */
        
        
        cout << " Inserice primo numero\n" << endl;
        cin >> numero1;
		cout << " Inserice secondo numero\n" << endl;
        cin >> numero2;
              /*calcolare la somma */

        somma = numero1+numero2;
        
                /* Calcolare la media */

        media = somma/2;

                /* stampa la media */

       cout << "La media e:" << media << endl;


        return 0;
}

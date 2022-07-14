#include <iostream>

using namespace std;

int main ()
{
		/* Dechiarazioni Dei variabili */
	
	int numero1=0;
	int numero2=0;
	int somma=0;
	

		/* Inserimento dei 2 numeri */

	cout << "Inserisci un numero\n"<<endl;
	cin >> numero1;
	
	cout << "Inserisci un secondo numero\n" << endl;
	cin >> numero2;
	
		/* calcolare la somma */

	somma=numero1+numero2;
	
		/* Stampa la somma*/

	cout << "Somma = " << somma <<endl;
	
	return 0;
}

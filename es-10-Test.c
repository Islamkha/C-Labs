#include <stdio.h>
	/* Dechiarazioni di funzioni */
void menu ();
void moltiplica ();
void dividi ();
void ins_string();


int main () 

{
	/* Dichiarazione di variabili */
	
	char scelta = {'\0'}; // Dichiarazione di variabile tipo Char nome scelta valore '\0' (nullo). 
	
	menu (); // procedi con la funzionamento menu
	
	//scanf ("%d", &scelta);>> %d refrisce da un variable tipo int quando il variabili e char se usa %c o %s 
	scanf("%c",&scelta);

	switch (scelta) //  Controllo condezionale a base del  valore di variable scelta.
	{
		case 'A':
		moltiplica(); // in caso di scelta di A prosegui con funzionamento di multiplica descritta sotto
		break;

		case 'B':
                dividi();  // in caso di scelta di B prosegui con funzionamento di dividi descritta sotto
                break;

		case 'C':
                ins_string();  // in caso di scelta di C prosegui con funzionamento di ins_string descritta sotto
                break;
	}

return 0;

}

			/* il processi del funzione void menu */
void menu ()
{
	printf ("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf ("Come posso aiutarti?\n");
	printf ("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");

}

			/* il processi del funzione void moltiplica */
void moltiplica ()
{
	//short int  a,b = 0; //short int e un variabile di linguaggio c++
	int a, b = 0;
	printf ("Inserisci i due numeri da moltiplicare:");
	//scanf ("%f", &a); //%f refrisce da un variable tipo float quando il variabili e int se usa %d.
	scanf ("%d", &a);
	scanf ("%d", &b);

	//short int prodotto = a * b; //short int e un variabile di linguaggio c++//>> il variabile prodotto dovreppe essere dechiarato prima
	int prodotto; //dichiarazione variabile prodotto
	prodotto = a * b; //Il valore di prodotto
	printf ("Il prodotto tra %d e %d e': %d", a,b,prodotto);
}

			/* il processi del funzione void dividi */
void dividi ()
{
        //int  a,b = 0; >> come in e  un caso vero  ma non si include i numeri decimali e meglio usare float
	float  a, b = 0; 
        printf ("Inserisci il numeratore:");
	//scanf ("%d", &a); >> dobiamo cambiare  finche abiamo cambiato il variabile
        scanf ("%f", &a);
	printf ("Inserisci il denumeratore:");
	//scanf("%d", &b); >> come il numeratore
        scanf ("%f", &b);

        //int divisione = a % b; // variabile divisione dovrebbe essere dechiarato prima, % non e l'operatore di divisione
	float divisione;
	divisione = a / b;

        printf ("La divisione tra %f e %f e': %f", a,b,divisione);// Stampa il risoltato.
}

				/* il processi del funzione void ins_string */
void ins_string () 
{
	char stringa[10]; // Dichiarazione di un variabile di tip char, di nome stringa, contiene 10 carattere.
        printf ("Inserisci la stringa:"); // stampa
		scanf ("%s", &stringa);			 // Chiedi inserimento di stringa
		printf ("Hai scritto: %s", stringa); // stampa del valore del variabile stringa (inserimento dal utente).
}

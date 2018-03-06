/*
Nome sorgente:	sommamatrici.c
Classe:	3BIN
Data:	06/03/2018
Funzione:	fa la somma di due matrici.	
Commenti:	l'algoritmo funziona correttamente ma va reso più robusto.
Versione n°1
*/


#include<stdio.h>
#include<time.h>

#define MAX 100

void getmatrici(int matn[][MAX],int n);
void getsomma(int mat1[][MAX],int mat2[][MAX],int matsomma[][MAX],int n);
void stampamatrici(int matn[][MAX],int n);


int main(){
	srand(time(NULL));
	
	//inizializzo 3 matrici e una variabile intera
	int mat1[MAX][MAX];
	int mat2[MAX][MAX];
	int matsomma[MAX][MAX];
	int n;
	//chiediamo all'utente quale è la dimensione della nostra matrice quadrata
	printf("quale è la dimensione della matrice quadrata?");
	scanf("%d",&n);	
	
	getmatrici(mat1,n);

	getmatrici(mat2,n);
	
	stampamatrici(mat1,n);
	
	stampamatrici(mat2,n);
	
	getsomma(mat1,mat2,matsomma,n);
	
	stampamatrici(matsomma,n);


	return 0;
}


/*data in input una matrice e il numero di righe e colonne, riempe la matrice con numeri casuali da 0 a 99.*/
void getmatrici(int matn[][MAX],int n){
	int j,k;	
	for( j = 0 ;j < n ;j++){
		for( k = 0 ; k < n; k++){
			matn[j][k] = rand()%100;
		}
	}

}

/*date in input due matrici come addendi, una matrice per il risultato e il numero di righe e colonne, 
calcola la somma degli elementi che occupano la stessa posizione delle 2 matrici e le mettono nelle 
rispettive posizioni nella terza matrice */
void getsomma(int mat1[][MAX],int mat2[][MAX],int matsomma[][MAX],int n){
	int j,k;	
	for( j = 0 ;j < n ;j++){
		for( k = 0 ; k < n; k++){
			matsomma[j][k] = mat1[j][k] + mat2[j][k];
		}
	}
}

/*stampa a video una matrice data*/
void stampamatrici(int matn[][MAX],int n){
	int j,k;	
	printf("\n");
	for( j = 0 ;j < n ;j++){
		for( k = 0 ; k < n; k++){
			printf("%d	",matn[j][k]); 
		}
	printf("\n\n\n");
	}

	printf("\n\n");

}

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
	int mat1[MAX][MAX];
	int mat2[MAX][MAX];
	int matsomma[MAX][MAX];

	int n;

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



void getmatrici(int matn[][MAX],int n){
	int j,k;	
	for( j = 0 ;j < n ;j++){
		for( k = 0 ; k < n; k++){
			matn[j][k] = rand()%100;
		}
	}

}


void getsomma(int mat1[][MAX],int mat2[][MAX],int matsomma[][MAX],int n){
	int j,k;	
	for( j = 0 ;j < n ;j++){
		for( k = 0 ; k < n; k++){
			matsomma[j][k] = mat1[j][k] + mat2[j][k];
		}
	}
}


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

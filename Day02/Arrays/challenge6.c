#include<stdio.h>

int main() {

int n,factor;

printf("entrez monbre des elements du tableau : ");
scanf(" %d", &n);

printf("entrez monbre de factor : ");
scanf(" %d", &factor);


int array[n];



printf("entrez les element de tableau : ");

for( int i=0 ; i<n ; i++ ){


    scanf(" %d", &array[i]);

}

printf("L'affichage de tableau : \n");

for( int i=0 ; i<n ; i++ ){

    printf("%d ",array[i]);


}

printf("\nL'affichage de nouvelle tableau : \n");

for( int i=0 ; i<n ; i++ ){

    printf("%d ",factor*array[i]);


}

printf("\nfactor de tableau est : %d ",factor);

return 0;
}


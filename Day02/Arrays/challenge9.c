#include<stdio.h>

int main() {

int n;

printf("entrez nombre des elements du tableau : ");
scanf(" %d", &n);



int array[n];



printf("entrez les element de tableau : ");

for( int i=0 ; i<n ; i++ ){


    scanf(" %d", &array[i]);

}

printf("L'affichage de tableau : \n");

for( int i=0 ; i<n ; i++ ){

    printf("%d ",array[i]);


}

printf("\nL'affichage inverse de tableau : \n");

for( int i=n-1 ; i>=0 ; i-- ){

    printf("%d ",array[i]);


}

return 0;
}



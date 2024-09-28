#include<stdio.h>

int main() {

int n,tsomme=0;

printf("entrez monbre des elements du tableau : ");
scanf(" %d", &n);



int array[n];



printf("entrez les element de tableau : ");

for( int i=0 ; i<n ; i++ ){


    scanf(" %d", &array[i]);

}

printf("L'affichage de tableau : \n");

for( int i=0 ; i<n ; i++ ){

    printf("%d\n",array[i]);
    tsomme += array[i];

}



printf("la somme des element de tableau : %d ",tsomme);

return 0;
}


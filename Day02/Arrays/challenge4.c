#include<stdio.h>

int main() {

int n,max;

printf("entrez nombre des elements du tableau : ");
scanf(" %d", &n);



int array[n];



printf("entrez les element de tableau : ");

for( int i=0 ; i<n ; i++ ){


    scanf(" %d", &array[i]);

}

printf("L'affichage de tableau : \n");

for( int i=0 ; i<n ; i++ ){

    printf("%d\n",array[i]);

}

for( int i=0 ; i<n ; i++ ){

max=array[0];
if(array[i]>max)
    max=array[i];


}


printf("Max element du tableau est : %d ",max);

return 0;
}


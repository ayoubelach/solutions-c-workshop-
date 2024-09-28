#include<stdio.h>

int main() {

int n,min;

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

min=array[0];
if(array[i]<min)
    min=array[i];


}


printf("min element du tableau est : %d ",min);

return 0;
}


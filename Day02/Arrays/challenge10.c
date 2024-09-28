#include<stdio.h>

int main() {

int n,target,count;

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

printf("entrez target pour rechercher dans le tableau : ");
scanf(" %d", &target);


for( int i=0 ; i<n ; i++ ){

if(array[i]==target){

   target=array[i];
   printf("target trouve : %d\n",target);

}
else
 printf("target non trouve\n");

}

return 0;
}


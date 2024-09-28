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

int target,nbtarget=0;
printf("entrez un target pour rechercher dans le tableau : ");
scanf(" %d", &target);


for( int i=0 ; i<n ; i++ ){

if(array[i]==target){

printf("target est trouve\n ");
++nbtarget;

}
printf("target : , ");




}


printf("min element du tableau est : %d ",min);

return 0;
}



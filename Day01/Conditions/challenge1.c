#include<stdio.h>

char caractere;

int main(){

        printf( "entrez un caractere : ");
        scanf(" %c",&caractere);

switch(caractere){

       case 'a' :
       case 'e' :
       case 'u' :
       case 'o' :
       case 'i' :
       case 'A' :
       case 'E' :
       case 'O' :
       case 'I' :
       case 'U' :

                  printf("voyelle");
       break;

       default :

           printf("non voyelle");


        }




return 0;
}

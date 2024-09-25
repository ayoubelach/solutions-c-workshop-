#include<stdio.h>

int num1,num2,somme;

int main(){

        printf( "entrez 1er nombre : ");
        scanf("%d",&num1);
        printf( "entrez 2eme nombre : ");
        scanf("%d",&num2);

        if(num1!=num2){

         somme = num1 + num2 ;
         printf("la somme est : %d ",somme);

        }

        else
        printf("le triple somme de num1 et num2 est : %d",3*(num1+num2));


return 0;
}

#include<stdio.h>
char alphabet;
int main(){
   do{
printf("entrez l'alphabet pour afficher sa nature majuscule ou minuscule : ");
scanf(" %c",&alphabet);

if( alphabet>=65 && alphabet<=90 ){

  printf("l'alphabet est majuscule\n ");

}
else if( alphabet>=97 && alphabet<=122 )
    {

  printf("l'alphabet est minuscule\n ");

}

else

  printf("invalid choix\n ");


  }while(alphabet!='#');





return 0;


}


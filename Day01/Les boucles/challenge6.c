#include<stdio.h>

int main(){

int nombre,i,factorielle=1,j=0;
do{
printf("entrez un nombre positive : ");
scanf("%d",&nombre);

printf("Affichage des %d Premiers Nombres pairs : ",nombre);

if(nombre>=0){

for(i=1;i<=2*nombre+1;i++){

if(i%2==0){

printf("%d ",i);
++j;

}


}

    printf("\nl'index est egal : %d\n ",j);

}
else{
printf("invalid choix") ;

}

j=0;

}while(nombre!=-1);
return 0;
}

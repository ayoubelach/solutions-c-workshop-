#include<stdio.h>

int main(){

int nombre,i,factorielle=1;

printf("entrez un nombre positive : ");
scanf("%d",&nombre);

if(nombre>=0){
for(i=1;i<=nombre;i++){

  factorielle=factorielle*i;


}
    printf("factorielle de %d est : %d ",nombre,factorielle);
}
else{
printf("invalid choix") ;

}

return 0;
}


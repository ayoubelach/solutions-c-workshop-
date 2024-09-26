#include<stdio.h>

int main(){

int nombre,i,somme=0;

printf("entrez un nombre positive : ");
scanf("%d",&nombre);

if(nombre>=0){
for(i=1;i<=nombre;i++){

  somme=somme+i;


}

    printf("la somme de 1+2+3....%d est egal : %d  ",nombre,somme);

}
else{
printf("invalid choix") ;

}

return 0;
}



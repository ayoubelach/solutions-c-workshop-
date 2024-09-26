#include<stdio.h>

int main(){

int nombre,i,exposant,index;
do{
printf("entrez un nombre positive (base) : ");
scanf("%d",&nombre);

printf("entrez un nombre positive (exposant) : ");
scanf("%d",&exposant);

index=nombre;

if(nombre>=0){
for(i=1;i<exposant;i++){

  nombre=nombre*index;


}

    printf("la puissance d'un nombre entier %d base eleve a un exposant %d est : %d\n  ",index,exposant,nombre);

}
else{
printf("invalid choix") ;

}
}while(nombre!=0 && exposant!=0);
return 0;
}

#include<stdio.h>
int sfebon(int termen ){
int f0=0,f1=1,f,s=1;
for(int i=2;i<=termen;i++){

    f=f0+f1;
    f0=f1;
    f1=f;
    s=s+f;
}



return s;

}
int main(){
    int nombre;
printf("entrez nieme terme de suite de febbonacchi pour colculer somme f0+f1.....fn : ");
scanf("%d",&nombre);
printf("la somme est egal a : %d",sfebon(nombre));



return 0;
}

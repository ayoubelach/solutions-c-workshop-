#include<stdio.h>

int main(){

int f0 = 0,f1 = 1,f,fs,fr,nombre;

printf("entrez un nombre pour calculer les termes des suites de febbonachi : ");
scanf("%d",&nombre);

 printf("f0 = %d  f1 = %d ",f0,f1);


for(int i=2;i<=nombre;i++){

  f=f0+f1;
  f0=f1;
  f1=f;

  printf("f%d = %d  ",i,f);


}


return 0;
}


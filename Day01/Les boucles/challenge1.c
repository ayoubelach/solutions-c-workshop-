#include<stdio.h>

int main(){

int nombre,i,multi;

printf("entrez un nombre positive : ");
scanf("%d",&nombre);

printf("table multiplication de %d : \n",nombre);

for(i=1;i<=10;i++){

  multi=nombre*i;

  printf("%d x %d = %d\n",nombre,i,multi);


}


return 0;
}

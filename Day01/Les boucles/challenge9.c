#include<stdio.h>

int main() {

unsigned int n,i,j=0;
do{
do{
printf("entrer un nombre strictement positif : ");
scanf("%d",&n);

}while(n<=0);


while(n>0){

n=n/10;
 ++j;

}

printf("le nombre qui est contien %d chiffres.\n ",j);

j=0;

}while(n<=0);

return 0;
}

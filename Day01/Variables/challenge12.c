#include<stdio.h>

int numbre,num1,num2,num3,num4;

int main(){

        printf( "entrez un nombre qui est contient 4 : ");
        scanf("%d",&numbre);

        num1 = numbre/1000;
        num2 = (numbre/10) % (num1);


printf("%d%d",num2,num1);


return 0;
}

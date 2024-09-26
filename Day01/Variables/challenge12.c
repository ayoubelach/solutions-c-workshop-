#include<stdio.h>

int numbre,num1,num2,num3,num4,inv;

int main(){

        printf( "entrez un nombre qui est contient 4 : ");
        scanf("%d",&numbre);

        num1 = numbre/1000;
        num2 = (numbre/100) % 10;
        num3 = (numbre/10) % 10;
        num4 = numbre%10;
inv = num4 * 1000 + num3 * 100 + num2 * 10 + num1 ;
        printf( "%d",inv);



return 0;
}

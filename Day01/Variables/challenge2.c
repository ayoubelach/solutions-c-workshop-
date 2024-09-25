#include<stdio.h>
float c,k;
int main(){
printf( "entrer la temperature en celsius pour transferer en kelvin : ");
scanf("%f",&c);
k = c + 273.15;
printf("la temperature en kelvin est : %0.2f",k);


return 0;
}


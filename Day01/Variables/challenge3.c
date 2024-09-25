#include<stdio.h>
float km,yards;
int main(){
printf( "entrer la distante en km pour converter en yards : ");
scanf("%f",&km);
yards = km * 1093.61;
printf("la distance en yards est : %0.2f",yards);


return 0;
}

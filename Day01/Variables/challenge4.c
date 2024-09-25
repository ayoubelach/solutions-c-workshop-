#include<stdio.h>
float temperature;
int main(){
printf( "entrer la temperature en celsuis pour affiche l'etat de l'eau : ");
scanf("%f",&temperature);
if(temperature<0)
printf("l'etat de l'eau est solide");
if(temperature>=100)
printf("l'etat de l'eau est gaz");
if(temperature<100)
printf("l'etat de l'eau est liquide");

return 0;
}


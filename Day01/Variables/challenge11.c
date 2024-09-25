#include<stdio.h>

double longueur,largeur,surface;

int main(){

        printf( "entrez longueur : ");
        scanf("%lf",&longueur);
         printf( "entrez largeur : ");
        scanf("%lf",&largeur);


surface = longueur * largeur ;

printf("la surface est egale est : %.2lf",surface);


return 0;
}

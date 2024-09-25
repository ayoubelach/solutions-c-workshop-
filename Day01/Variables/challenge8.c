#include <stdio.h>
#include <math.h>
double a,b,c;
double moyennegeo;
int main() {
printf("Entrez trois nombres : \n");
    printf("Entrez le premier nombre : ");
    scanf("%lf", &a);
    printf("Entrez le deuxieme nombre : ");
    scanf("%lf", &b);
    printf("Entrez le troisieme nombre : ");
    scanf("%lf", &c);

    moyennegeo = pow((a*b*c),0.333333);

    printf("la moyenne geometrique est egal a : %0.2lf",moyennegeo);

return 0;
}



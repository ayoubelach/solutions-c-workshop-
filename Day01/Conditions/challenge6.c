#include <stdio.h>
double nombre;
int main() {

printf("entrez un nombre pour trouver sa nature : ");
    scanf("%lf", &nombre);

if(nombre>0)
    printf("le nombre est positif  ");

else if(nombre<0)
    printf("le nombre est negatif  ");

else
    printf("le nombre est null  ");


return 0;
}


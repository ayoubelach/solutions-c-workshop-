#include <stdio.h>

int main() {
    double nombre1, nombre2, nombre3;
    double poid1 = 2, poid2 = 3, poid3 = 5;
    double moyenne;

    printf("Entrez le premier nombre : ");
    scanf("%lf", &nombre1);
    printf("Entrez le deuxieme nombre : ");
    scanf("%lf", &nombre2);
    printf("Entrez le troisieme nombre : ");
    scanf("%lf", &nombre3);

    moyenne = (nombre1 * poid1 + nombre2 * poid2 + nombre3 * poid3) / (poid1 + poid2 + poid3);

    printf("La moyenne ponderee est : %0.2lf\n", moyenne);

    return 0;
}


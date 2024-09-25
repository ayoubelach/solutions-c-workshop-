#include <stdio.h>

int main() {
    double a, b;

    printf("Entrez le premier nombre a : ");
    scanf("%lf", &a);
    printf("Entrez le deuxième nombre b : ");
    scanf("%lf", &b);
    //les operations
    double somme = a + b;
    double difference = a - b;
    double produit = a * b;
    double quotient;
    //erreur
    if (b != 0) {
        quotient = a / b;
        printf("quotient = %0.2lf\n", quotient);
    } else {
        printf("Erreur : Division par zero!\n");
    }

    // Affichage
    printf("somme = %0.2lf\n", somme);
    printf("differance = %0.2lf\n", difference);
    printf("prodiut = %0.2lf\n", produit);

    return 0;
}


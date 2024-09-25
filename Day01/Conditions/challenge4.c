#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, x1, x2;

    printf("Entrez les coefficients a, b et c : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("n'est pas une equation de deuxieme degre.\n");
        return 1;
    }

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("les solutions reelles sont : x1 = %.2f et x2 = %.2f\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("il y a une solution reelle : x = %.2f\n", x1);
    } else {
        printf("pas de solutions reelles .\n");
    }

    return 0;
}




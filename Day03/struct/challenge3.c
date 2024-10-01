#include <stdio.h>
struct rectangle{

            float longueur;
            float largeur;

};

float calcul(struct rectangle rect){

    return rect.longueur * rect.largeur;

}



int main(){

struct rectangle rect1;

printf("entrez longueur: ");
scanf("%f",&rect1.longueur);

printf("entrez largeur: ");
scanf("%f",&rect1.largeur);

printf("l'air de rectangle egal a: %.2f",calcul(rect1));
    return 0;
}

#include<stdio.h>

struct personnes{

     char nom[50];
     char prenom[50];
     int age;


};

int main(){

        struct personnes personne1;

        printf("entrez le nom: ");
        gets(personne1.nom);

        printf("entrez prenom: ");
        gets(personne1.prenom);

        printf("entrez age de personne: ");
        scanf(" %d",&personne1.age);

        printf("---Les informations de personne1:---\nnom: %s\nprenom: %s\nage: %d",personne1.nom,personne1.prenom,personne1.age);


return 0;
}

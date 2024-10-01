#include<stdio.h>
#define MAX 40
struct personnes{

     char nom[50];
     char prenom[50];
     float note;


};

int main(){

        struct personnes etudiant[MAX];
        int n;
        printf("entrez le nombre des etudiant pour ajouter leur information: ");
        scanf(" %d",&n);

        for(int i=0;i<n;i++){
            printf("etudiant %d: \n",i+1);

            printf("nom: ");
            scanf(" %[^\n]s", &etudiant[i].nom);

            printf("prenom: ");
            scanf(" %[^\n]s", &etudiant[i].prenom);

            printf("Note: ");
            scanf("%f",&etudiant[i].note);
        }
         for(int i=0;i<n;i++){
            printf("etudiant %d: \n",i+1);

            printf("nom: %s \nprenom: %s\nnote: %.2f\n ",etudiant[i].nom,etudiant[i].prenom,etudiant[i].note);

        }
       /* printf("entrez le nom: ");
        gets(personne1.nom);

        printf("entrez prenom: ");
        gets(personne1.prenom);

        printf("entrez age de personne: ");
        scanf(" %d",&personne1.age);

        printf("---Les informations de personne1:---\nnom: %s\nprenom: %s\nage: %d",personne1.nom,personne1.prenom,personne1.age);*/


return 0;
}


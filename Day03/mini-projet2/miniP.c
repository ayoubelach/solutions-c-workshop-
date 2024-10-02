#include<stdio.h>
#include<string.h>
#define MAX 99
struct contact{

     char nom[50];
     char ndtel[50];
     char adresse[75];

};

struct contact contacts[MAX];
int ndcont=0;

void ajouter(){

    if(ndcont>=MAX){

     printf("la liste de contacts est plein.\n");
     return;

    }

    printf("entrer le nom de contact : ");
    scanf(" %[^\n]s", &contacts[ndcont].nom);
    printf("entrer nunero de telephone : ");
    scanf(" %[^\n]s", &contacts[ndcont].ndtel);
    printf("entrer l'adresse email de contact : ");
    scanf(" %[^\n]s", &contacts[ndcont].adresse);
    ndcont++;
    printf("contact ajoute avec succes...\n");

}

void afficher() {
    if (ndcont==0) {
        printf("Aucun contact a afficher.\n");
        return;
    }
    printf("Liste des contacts:\n");
    for (int i = 0; i < ndcont; i++) {
        printf("Contact %d:\n", i + 1);
        printf("Nom: %s\n", contacts[i].nom);
        printf("Numero de telefone: %s\n", contacts[i].ndtel);
        printf("Adresse: %s\n", contacts[i].adresse);
    }
}
void modifier() {
    char nom[50];
    printf("Entrez le nom du contact a modifier: ");
    scanf("%[^\n]s", &nom);

    for (int i = 0; i < ndcont; i++) {
        if (strcmp(contacts[i].nom, nom) == 0) {
            printf("Entrez le nouveau numero de telephone: ");
            scanf("%[^\n]s", &contacts[i].ndtel);
            printf("Entrez la nouvelle adresse: ");
            scanf(" %[^\n]", &contacts[i].adresse);
            printf("Contact modifie avec succes.\n");
            return;
        }
    }
    printf("Contact non trouve.\n");
}
void supprimer() {
    char nom[50];
    printf("Entrez le nom du contact a supprimer: ");
    scanf("%[^\n]s", &nom);

    for (int i=0;i<ndcont;i++) {
        if (strcmp(contacts[i].nom, nom) == 0) {
            for (int j = i; j < ndcont - 1; j++) {
                contacts[j] = contacts[j+1];
            }
            ndcont--;
            printf("Contact supprime avec succes.\n");
            return;
        }
    }
    printf("Contact non trouve.\n");
}
void rechercher() {
    char nom[50];
    printf("Entrez le nom du contact a rechercher: ");
    scanf("%[^\n]s", &nom);

    for (int i=0;i<ndcont;i++) {
        if (strcmp(contacts[i].nom, nom)==0) {
            printf("Contact trouve:\n");
            printf("Nom: %s\n", contacts[i].nom);
            printf("Numero de telephone: %s\n", contacts[i].ndtel);
            printf("Adresse: %s\n", contacts[i].adresse);
            return;
        }
    }
    printf("Contact non trouve.\n");
}

void tri(){
    struct contact ref;

    for(int i=0;i<ndcont-1;i++){
    for(int j=0;j<ndcont-1-i;j++) {
        if(strcmp(contacts[j].nom,contacts[j+1].nom)>0){
           ref=contacts[j];
           contacts[j]=contacts[j+1];
           contacts[j+1]=ref;
    } }}
    if(ndcont>0){
    printf("contacts sont trie avec succes...\n");}
    afficher();
        }








int main(){


int choix;

do{

    printf("********Systeme de Gestion de Contacts********** \n");
    printf("entrez 1 pour Ajouter un Contact :\n");
    printf("entrez 2 pour Modifier un Contact :\n");
    printf("entrez 3 pour Supprimer un Contact : \n");
    printf("entrez 4 pour Afficher Tous les Contacts :\n");
    printf("entrez 5 pour Rechercher un Contact :\n");
    printf("entrez 6 pour tri par l'ordre alphabethique A a Z :\n");
    printf("entrez 7 pour quitter le programme :\n");
    printf("************************************************\n");
    printf("faites un choix : ");
    scanf("%d",&choix);

    switch(choix){

    case 1 : ajouter(); break;

    case 2 : modifier(); break;

    case 3 : supprimer(); break;

    case 4 : afficher(); break;

    case 5 : rechercher(); break;

    case 6 : tri(); break;

    case 7 : printf("le programme est quitte"); break;

    default : printf("choix invalid!");


    }

}while(choix!=7);




return 0;
}


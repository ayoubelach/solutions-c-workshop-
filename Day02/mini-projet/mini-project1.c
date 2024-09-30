#include<stdio.h>
#include<string.h>
#define MAX 99

char titre[MAX][99];
char auteur[MAX][99];
float prix[MAX];
int quan[MAX];
int count=0;

void ajouter() {
    if(count >= MAX) {
        printf("le stock est plein.\n");
        return;
    }

    printf("entrer le titre du livre : ");
    scanf(" %[^\n]s", &titre[count]);
    printf("entrer le nom de l'auteur : ");
    scanf(" %[^\n]s", &auteur[count]);
    printf("entrer le prix du livre : ");
    scanf(" %f", &prix[count]);
    printf("entrer la quantite : ");
    scanf(" %d", &quan[count]);
    count++;
    printf("livre ajoute avec succes...\n");
}

void afficher() {
    if(count==0) {
        printf("aucun livre disponible.\n");
        return;
    }

    printf("livres disponibles : \n");
    for(int i=0;i<count;i++) {
        printf("livre %d : titre : %s - auteur : %s - prix : %0.2f dhs - quantite : %d .\n",i+1,titre[i],auteur[i],prix[i],quan[i]);
    }
}

void mettre() {
    char titrederech[50];
    printf("entrer le titre du livre a mettre a jour: ");
    scanf(" %[^\n]s", titrederech);

    for(int i=0;i<count;i++) {
        if(strcasecmp(titre[i],titrederech)==0) {
            printf("la nouvelle quantite : ");
            scanf("%d",&quan[i]);
            printf("la quantite mise a jour...\n");
            return;
        }
    }
    printf("livre non trouve.\n");
}

void supprimer() {
    char titrederech[50];
    printf("entrer le titre du livre a supprimer : ");
    scanf(" %[^\n]s",titrederech);

    for(int i=0;i<count;i++) {
        if(strcmp(titre[i],titrederech)==0) {
            for(int j=i; j<count-1;j++) {
                strcpy(titre[j],titre[j+1]);
                strcpy(auteur[j],auteur[j+1]);
                prix[j]=prix[j+1];
                quan[j]=quan[j+1];
            }
            count--;
            printf("livre supprime avec succes...\n");
            return;
        }
    }
    printf("Livre non trouve.\n");
}

void affichent() {
    printf("nombre total de livres en stock : %d\n",count);
}


int main(){

int choix;
do{
    printf("l. Systeme de Gestion de Stock dans une Librairie : \n");
    printf("1. Ajouter un Livre au Stock\n");
    printf("2. Afficher Tous les Livres Disponibles : \n");
    printf("3. Mettre a jour la Quantite d'un Livre :\n");
    printf("4. Supprimer un Livre du Stock :\n");
    printf("5. Afficher le Nombre Total de Livres en Stock :\n");
    printf(" . pour quitter le programme p -> 6.\n");
    printf("entre votre choix : ");
    scanf("%d",&choix);
    switch(choix){

              case 1 : ajouter(); break;

              case 2 : afficher(); break;

              case 3 : mettre(); break;

              case 4 : supprimer();break;

              case 5 : affichent(); break;

              case 6 : printf("le programme est quittee."); break;

              default : printf("choix invalid.\n");

    }






}while(choix!=6);

return 0;
}

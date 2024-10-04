#include<stdio.h>
#include<string.h>
#define max 100

struct reservation {
char nom[50] ;
char prenom[50];
char ndtel[50];
int age;
char status[10]; //v=validé, a=annuler, r=reporte, t=traite.
int ref;
char date[11]; //exemple 27/07/2000
};

struct reservation r[max];
int count=0, countref=1;

void ajouterpard(){

strcpy(r[0].nom,"ayoub");
strcpy(r[0].prenom,"elachkaoui");
strcpy(r[0].ndtel,"0623420804");
r[0].age=24;
strcpy(r[0].status,"valide");
r[0].ref=countref++;
strcpy(r[0].date,"03/10/2023");

strcpy(r[1].nom,"brahim");
strcpy(r[1].prenom,"ben");
strcpy(r[1].ndtel,"0623420805");
r[1].age=64;
strcpy(r[1].status,"traite");
r[1].ref=countref++;
strcpy(r[1].date,"02/10/2023");

strcpy(r[2].nom,"calafiori");
strcpy(r[2].prenom,"max");
strcpy(r[2].ndtel,"0623410504");
r[2].age=34;
strcpy(r[2].status,"annule");
r[2].ref=countref++;
strcpy(r[2].date,"01/10/2023");

strcpy(r[3].nom,"zahri");
strcpy(r[3].prenom,"bohmed");
strcpy(r[3].ndtel,"0623420814");
r[3].age=40;
strcpy(r[3].status,"valide");
r[3].ref=countref++;
strcpy(r[3].date,"02/10/2023");

strcpy(r[4].nom,"dahmad");
strcpy(r[4].prenom,"morchidi");
strcpy(r[4].ndtel,"0623427854");
r[4].age=5;
strcpy(r[4].status,"reporte");
r[4].ref=countref++;
strcpy(r[4].date,"02/10/2012");

strcpy(r[5].nom,"sofiane");
strcpy(r[5].prenom,"alaoui");
strcpy(r[5].ndtel,"0623427814");
r[5].age=5;
strcpy(r[5].status,"traite");
r[5].ref=countref++;
strcpy(r[5].date,"02/10/2022");

strcpy(r[6].nom,"naima");
strcpy(r[6].prenom,"motawadi");
strcpy(r[6].ndtel,"0623427814");
r[6].age=54;
strcpy(r[6].status,"traite");
r[6].ref=countref++;
strcpy(r[6].date,"02/10/2022");

strcpy(r[7].nom,"halima");
strcpy(r[7].prenom,"ben");
strcpy(r[7].ndtel,"0623447814");
r[7].age=4;
strcpy(r[7].status,"traite");
r[7].ref=countref++;
strcpy(r[7].date,"02/10/2022");

strcpy(r[8].nom,"walid");
strcpy(r[8].prenom,"malki");
strcpy(r[8].ndtel,"0653427814");
r[8].age=54;
strcpy(r[8].status,"reporte");
r[8].ref=countref++;
strcpy(r[8].date,"02/10/2022");

strcpy(r[9].nom,"oualid");
strcpy(r[9].prenom,"elhoiary");
strcpy(r[9].ndtel,"0653427814");
r[9].age=36;
strcpy(r[9].status,"traite");
r[9].ref=countref++;
strcpy(r[9].date,"02/05/2022");
count=10;



}

void ajouter(){
if(count>=max){
printf("maximum de reservations");
return;
}
struct reservation nr;
printf("entrer les informations de nouvelle réservation:\n");
printf("nom: ");
scanf(" %[^\n]s", &nr.nom);
printf("prenom: ");
scanf(" %[^\n]s", &nr.prenom);
printf("numero de telephone: ");
scanf(" %[^\n]s", &nr.ndtel);
printf("age:");
scanf("%d", &nr.age);
printf("status: ");
scanf(" %[^\n]s", &nr.status);
printf("date de reservations: ");
scanf(" %[^\n]s", &nr.date);
nr.ref=countref++;
r[count]=nr;
count++;
printf("reservation est ajouter avec succes\n");
}
void modifier(){

    int a;
    printf("entrez numero de reference unique de reservation: ");
    scanf("%d",&a);
    for(int i=0;i<count;i++){
        if(r[i].ref==a){
            printf("reservation est trouver pour modifier:\n");
            printf("nom: ");
           scanf(" %[^\n]s",&r[i].nom);
           printf("prenom: ");
           scanf(" %[^\n]s",&r[i].prenom);
           printf("numero de telephone: ");
           scanf(" %[^\n]s",&r[i].ndtel);
            printf("age:");
           scanf("%d",&r[i].age);
           printf("status: ");
           scanf(" %[^\n]s",&r[i].status);
          printf("date de reservations: ");
          scanf(" %[^\n]s",&r[i].date);
          printf("reservation modifie avec succes\n");
            return;
        }

    }

    printf("reservation non trouve\n");
}

void supprimer(){
     int a;
     printf("entrez numero de reference unique de reservation: ");
     scanf(" %d",&a);
     for(int i=0;i<count;i++){
      if(r[i].ref==a) {
        for(int j=i;j<count-1;j++)
        r[j]=r[j+1];

      }
       count--;
       printf("reservation supprime avec succes\n") ;
        return;
     }

     printf("reservation non trouve\n");

}

void afficher(){
     int a;
     printf("entrez numero de reference unique de reservation: ");
     scanf("%d",&a);
     for(int i=0;i<count;i++){
      if(r[i].ref==a){
        printf("les information de reservation:\n");
        printf("nom et prenom: %s %s \n",r[i].nom,r[i].prenom);
        printf("numero de telrphone: %s \n",r[i].ndtel);
        printf("age: %d \n",r[i].age);
        printf("status: %s  \n",r[i].status);
        printf("date de reservation: %s \n",r[i].date);
        return;
      }

     }
      printf("reservation non trouve\n");

}
void rechercher(){
   int a,c;
   char n[50];
    printf("entrer votre choix 1 pour rechercher par reference de reservation et 2 pour rechercher par nom de patient: ");
    scanf("%d",&c);

    switch(c){

    case 1 : afficher(); break;

    case 2 : printf("entrez nom de patient:");
             scanf(" %[^\n]s",&n);
             for(int i=0;i<count;i++){
             if(strcasecmp(r[i].nom,n)==0){
               printf("les information de reservation de reference %d:\n",r[i].ref);
               printf("nom et prenom: %s %s \n",r[i].nom,r[i].prenom);
               printf("numero de telrphone: %s \n",r[i].ndtel);
               printf("age: %d \n",r[i].age);
               printf("statut: %s  \n",r[i].status);
               printf("date de reservation: %s \n",r[i].date);
        return;

             }

             }
             printf("reservation non trouve\n");
             break;

}
}
void tri(){
     int c;
     printf("entrez votre choix: 1 pour trie par nom, 2 pour trie par reference et 3 pour trie par status de reservation: \n");
     scanf("%d",&c);
     if(c==1){
      struct reservation ref;

    for(int i=0;i<count-1;i++){
    for(int j=0;j<count-1-i;j++) {
        if(strcasecmp(r[j].nom,r[j+1].nom)>0){
           ref=r[j];
           r[j]=r[j+1];
           r[j+1]=ref;
    } }}
    if(count>0){
    printf("reservations sont trie par nom avec succes...\n");}
    if (count==0) {
        printf("Aucun reservation a afficher.\n");
        return;
    }
    printf("Liste des reservation:\n");
    for (int i=0;i <count; i++) {
        printf("reference %d:\n", r[i].ref);
        printf("Nom et prenom: %s %s\n", r[i].nom,r[i].prenom);
        printf("Numero de telefone: %s\n", r[i].ndtel);
        printf("age: %d\n", r[i].age);
        printf("statut: %s\n", r[i].status);
        printf("date de reservation: %s\n", r[i].date);
    }

}
else if(c==2){
     struct reservation ref;

    for(int i=0;i<count-1;i++){
    for(int j=0;j<count-1-i;j++) {
        if(r[j].ref>r[j+1].ref){
           ref=r[j];
           r[j]=r[j+1];
           r[j+1]=ref;
    } }}
    if(count>0){
    printf("reservations sont trie par reference avec succes...\n");}
    if (count==0) {
        printf("Aucun reservation a afficher.\n");
        return;
    }
    printf("Liste des reservation:\n");
    for (int i=0;i <count; i++) {
        printf("reference %d:\n", r[i].ref);
        printf("Nom et prenom: %s %s\n", r[i].nom,r[i].prenom);
        printf("Numero de telefone: %s\n", r[i].ndtel);
        printf("age: %d\n", r[i].age);
        printf("statut: %s\n", r[i].status);
        printf("date de reservation: %s\n", r[i].date);
    }



}
else
    {
    printf("***********les reservations sont valide:*********** \n");
    for(int i=0;i<count;i++){
    if(strcasecmp(r[i].status,"valide")==0){
        printf("reference %d:\n", r[i].ref);
        printf("Nom et prenom: %s %s\n", r[i].nom,r[i].prenom);
        printf("Numero de telefone: %s\n", r[i].ndtel);
        printf("age: %d\n", r[i].age);
        printf("date de reservation: %s\n", r[i].date);

    }}
    printf("***********les reservations sont reporte:*********** \n");
    for(int i=0;i<count;i++){
    if(strcasecmp(r[i].status,"reporte")==0){
        printf("reference %d:\n", r[i].ref);
        printf("Nom et prenom: %s %s\n", r[i].nom,r[i].prenom);
        printf("Numero de telefone: %s\n", r[i].ndtel);
        printf("age: %d\n", r[i].age);
        printf("date de reservation: %s\n", r[i].date);

    }}
    printf("************les reservations annule sont:*********** \n");
    for(int i=0;i<count;i++){
    if(strcasecmp(r[i].status,"annule")==0){
        printf("reference %d:\n", r[i].ref);
        printf("Nom et prenom: %s %s\n", r[i].nom,r[i].prenom);
        printf("Numero de telefone: %s\n", r[i].ndtel);
        printf("age: %d\n", r[i].age);
        printf("date de reservation: %s\n", r[i].date);

    }}
    printf("************les reservations traite sont:*********** \n");
    for(int i=0;i<count;i++){
    if(strcasecmp(r[i].status,"traite")==0){
        printf("reference %d:\n", r[i].ref);
        printf("Nom et prenom: %s %s\n", r[i].nom,r[i].prenom);
        printf("Numero de telefone: %s\n", r[i].ndtel);
        printf("age: %d\n", r[i].age);
        printf("date de reservation: %s\n", r[i].date);

    }}

     }

}
void statis() {
    int sage=0;
    int agea=0,ageb=0,agec=0;
    int valide=0,reporte=0,annule=0,traite=0;

    for (int i=0;i<count;i++) {
        sage+=r[i].age;

        if (r[i].age<=18)
            agea++;
        else if (r[i].age<=35)
            ageb++;
        else
            agec++;

        if (strcmp(r[i].status,"valide")==0)
            valide++;
        else if (strcmp(r[i].status,"reporte")==0)
            reporte++;
        else if (strcmp(r[i].status,"annule")==0)
            annule++;
        else if (strcmp(r[i].status,"traite")==0)
            traite++;
        else
            printf("statut incorrect\n");
    }

    if (count > 0) {
        printf("moyenne d'age des patients: %.2f ans\n",(float)sage/count);
    } else {
        printf("Aucun patient pour calculer.\n");
    }

    printf("nombre de patients par tranche d'age : 0-18 ans : %d, 19-35 ans : %d, 36+ ans : %d\n",agea,ageb,agec);
    printf("statistiques des statuts : valide : %d, reporte : %d, annule : %d, traite : %d\n",valide,reporte,annule,traite);
}

int main()
{
int choix;

ajouterpard();

do{

    printf("****L'application permet de gérer les réservations de rendez-vous dentaires,**** \n");
    printf("entrez 1 pour Ajouter une réservation :\n");
    printf("entrez 2 pour Modifier une réservation :\n");
    printf("entrez 3 pour Supprimer une réservation : \n");
    printf("entrez 4 pour Afficher les détails d'une réservation:\n");
    printf("entrez 5 pour Rechercher recherche des réservations :\n");
    printf("entrez 6 pour tri par des réservations  :\n");
    printf("entrez 7 pour les statistiques :\n");
    printf("entrez 8 pour quitter le programme :\n");
    printf("********************************************************************************\n");
    printf("faites un choix : ");
    scanf("%d",&choix);

   switch(choix){

    case 1 : ajouter(); break;

    case 2 : modifier(); break;

    case 3 : supprimer(); break;

    case 4 : afficher(); break;

    case 5 : rechercher(); break;

    case 6 : tri(); break;

    case 7 : statis(); break;

    case 8 : printf("le programme est quitte"); break;

    default : printf("choix invalid!");


   }

}while(choix!=8);

    return 0;


}



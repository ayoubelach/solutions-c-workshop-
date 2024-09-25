#include<stdio.h>
int main(){
char nom[20];
char prenom[20];
char sexe[20];
char email[100];
int age;
printf("entrer le nom : ");
scanf("%s",&nom);
printf("entrer le prenom : ");
scanf("%s",&prenom);
printf("entrer le sexe : ");
scanf("%s",&sexe);
printf("entrer votre adresse email : ");
scanf("%s",&email);
printf("entrer votre age : ");
scanf("%d",&age);
//L'affichage
printf(" nom : %s\n ",nom);
printf("prenom : %s\n ",prenom);
printf("sexe : %s\n ",sexe);
printf("adresse email : %s\n ",email);
printf("age : %d\n ",age);
}

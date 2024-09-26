#include<stdio.h>
#include<string.h>
int jour,annee;
char mois;
int main(){

printf("entrez un date jj/mm/aa : ");
scanf("%d%s%d", &jour, &mois, &annee);

switch(mois){

           case 1 : strcpy(mois,"Janvier");
                   break;
           case 2 : strcpy(mois,"Fevrier");
                   break;
           case 3 : strcpy(mois,"Mars");
                   break;
           case 4 : strcpy(mois,"April");
                   break;
           case 5 : strcpy(mois,"Mai");
                   break;
           case 6 : strcpy(mois,"Juin");
                   break;
           case 7 : strcpy(mois,"Juillet");
                   break;
           case 8 : strcpy(mois,"Aout");
                   break;
           case 9 : strcpy(mois,"Septembre");
                   break;
           case 10 : strcpy(mois,"Octobre");
                   break;
           case 11 : strcpy(mois,"November");
                   break;
           case 12 : strcpy(mois,"December");
                   break;
           default : strcpy(mois,"inconnu"); break;



           printf("%02d - %s - %d ",jour,mois,annee);


}





return 0;

}

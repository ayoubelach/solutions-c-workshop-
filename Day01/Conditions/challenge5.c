#include <stdio.h>
unsigned int annee,counter;
char lechoix;
int main() {
printf("entrez les nombre du annee : ");
    scanf("%d", &annee);
printf("entrez un choix M J H m S : ");
    scanf(" %c",&lechoix);
    counter = annee;
    switch(lechoix){
  case'M' :
    annee *= 12;
    printf("input %d ans = %d moins",counter,annee);
    break;
  case'J' :
    annee = annee * 12 * 30;
    printf("input %d ans = %d jours",counter,annee);
    break;
  case'H' :
    annee = annee * 12 * 30 * 24;
    printf("input %d ans = %d heurs",counter,annee);
    break;
  case'm' :
    annee = annee * 12 * 30 * 24 * 60;
    printf("input %d ans = %d minutes",counter,annee);
    break;
  case'S' :
    annee = annee * 12 * 30 * 24 * 3600;
    printf("input %d ans = %d seconds",counter,annee);
    break;
  default :
    printf(" invalid choix");


    }

return 0;
}

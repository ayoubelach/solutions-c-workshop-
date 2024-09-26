#include<stdio.h>
float lanote;
int main(){
printf("entrez la note pour afficher la mention obtenue : ",lanote);
scanf("%f",&lanote);
if(lanote<10){

  printf(" est recale\n ");

}
else if(lanote>=10 && lanote<12){

  printf(" la mention est passable\n ");

}
else if(lanote>=12 && lanote<14){

  printf(" la mention est assez bien\n ");

}
else if(lanote>=14 && lanote<16){

  printf("  mention bien\n ");

}
else{

  printf("  tres bien\n ");

}


return 0;


}

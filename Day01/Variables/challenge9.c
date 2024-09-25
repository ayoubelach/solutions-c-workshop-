#include<stdio.h>
#include<math.h>

double x1,x2,y,y2,z1,z2;
double distance;

int main(){
        printf( "entrez coordonnee de point 1 : ");
        scanf("%lf%lf%lf",&x1,&y,&z1);
        printf( "entrez coordonnee de point 2 : ");
        scanf("%lf%lf%lf",&x2,&y2,&z2);

distance = sqrt( pow( ( x2-x1 ) , 2 ) + pow( ( y2-y ) , 2 ) + pow( ( z2-z1 ) , 2 ) );

printf("la distance entre 1 et 2 est : %.2lf",distance);


return 0;
}

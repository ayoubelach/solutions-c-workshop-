#include<stdio.h>
#include<math.h>

double rayon,volume;

int main(){

        printf( "entrez rayon de sphere : ");
        scanf("%lf",&rayon);


volume = 4.0/3.0 * M_PI * pow(rayon,3);

printf("volume de sphere est : %.2lf",volume);


return 0;
}

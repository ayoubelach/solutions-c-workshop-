#include<stdio.h>
int fact(int n){
int f=1;
for(int i=1;i<=n;i++){

  f*=i;

}

return f;
}

int main(){
int nombre;
        printf("entre un nombre positif : ");
        scanf(" %d",&nombre);

        if(nombre>0)
        printf("factorielle de %d est %d .\n",nombre,fact(nombre));

        else if(nombre==0)
        printf("factorielle de 0 est 1 : (0!=1)");

        else
        printf("erreur! cette resultat n'est pas definee ");


return 0;
}

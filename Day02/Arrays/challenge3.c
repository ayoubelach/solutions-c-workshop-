#include<stdio.h>
#define n 10
int main() {

int array[n];

printf("entrez les element de tableau : ");

for( int i=0 ; i<n ; i++ ){

    scanf("%d ",&array[i]);

}

printf("----------------------------------------------\n");
printf("----------------------------------------------\n");


for( int i=0 ; i<n ; i++ )

    printf("array[%d]=%d\n",i,array[i]);


return 0;
}


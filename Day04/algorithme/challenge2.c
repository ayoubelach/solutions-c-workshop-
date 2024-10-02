#include<stdio.h>

void trie(int t[],int taille){

for(int i=1;i<taille;i++){
int ref=t[i];
int j=i-1;
while(ref<t[j] && j>=0) {

 t[j+1]=t[j];
 j--;

}
  t[j+1]=ref;
}



}

int main(){

int T[]={1,2,3,4,5,6,7,8,9,10,22,13,45,75,96,10,12,33};
printf("unsorted array: \n");
int n=sizeof(T)/sizeof(T[0]);
for(int i=0;i<n;i++){

    printf("%d ",T[i]);
}

trie(T,n);
printf("\nsorted array: \n");
for(int i=0;i<n;i++){

    printf("%d ",T[i]);
}






return 0;
}

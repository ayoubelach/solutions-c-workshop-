#include<stdio.h>
#define n 10
int main() {
int ref;
int array[n]= {1,2,5,7,4,7,9,6,3};

for(int j=1;j<n;j++){
for( int i=0 ; i<n-1 ; i++ ){

  if(array[i]>array[i+1]){
    ref=array[i];
    array[i]=array[i+1];
    array[i+1]=ref;
  }
}
}
for( int i=0 ; i<n ; i++ ){

printf("%d ",array[i]);

}




return 0;
}


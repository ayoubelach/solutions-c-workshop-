#include<stdio.h>

int main() {
    int t[]= {3,3,2,1,5,9,8,7,4,6,6,9,10,47,6,9,7,88};
    int n;
    n=sizeof(t)/sizeof(t[0]);
    printf("unsorted array: ");
    for( int i=0;i<n;i++){
        printf("%d  ",t[i]);

    }
   printf("\nsorted array  : ");
    for(int i=0;i<n;i++){
     for(int j=0;j<n-i;j++)  {

        if(t[j]>t[j+1]){
         int ref=t[j];
             t[j]=t[j+1];
            t[j+1]=ref;
         }



     }


    }
    for( int i=0;i<n;i++){
        printf("%d  ",t[i]);

    }
    return 0;
}
   /* BubbleSort(array)
    for i from 0 to n-1
        for j from 0 to n-i-1
            if array[j] > array[j+1]
                swap array[j] and array[j+1]
    end for
end BubbleSort*/

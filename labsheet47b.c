#include <stdio.h>
int main(){
    int arr[10]={5,6,3,5,6,8,5,3,2,2};
    int check[5]={5,6,3,8,2},i,j,count=0;
    for(i=0;i<5;i++){
        for(j=0;j<10;j++){
            if(check[i]==arr[j]){count+=1;}
        }
        printf("Frequency of %d is %d.\n",check[i],count);
        count=0;
        }

    return 0;
}


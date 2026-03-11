#include<stdio.h>
int main(){
    int arr[5];
    int newarray[5];
    
    for(int i = 0; i<5; i++){
        printf("Enter number of arr[%d] = ", i+1);
        scanf("%d", &arr[i]);   
    }
    for(int i=0; i<5; i++){
        newarray[i]=arr[4-i];
        printf("newarr[%d] = %d\n", i, newarray[i]);
    }
    return 0;
}
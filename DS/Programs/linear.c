#include<stdio.h>
int main(){
    int i, num, lenght, temp=0;

    printf("Enter array lenght");
    scanf("%d", &lenght);

    int arr[lenght];

    for(i=0; i<lenght; i++){
        printf("Enter array[%d] = ",i);
        scanf("%d", &arr[i]);
    }

    printf("Ennter number to search element");
    scanf("%d", &num);

    for(i=0; i<lenght; i++){
        if(arr[i]==num){
            temp=1;
            printf("Element found at %d position", i+1);
            break;
        }
    }
    if(temp==0){
        printf("Element not found");
    }
    return 0;
}
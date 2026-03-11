#include<stdio.h>
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{54,23,55}};
    int large = 0, seclarge = 0;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j]>large){
                seclarge = large;
                large = arr[i][j];
            } 
            else if(arr[i][j] > seclarge && large != arr[i][j]){
                seclarge = arr[i][j];
            }
        }
    }

    printf("Largest number is %d\n", large);
    printf("Second Large number is %d\n", seclarge);

    return 0;
}
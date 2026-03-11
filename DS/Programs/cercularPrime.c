#include<stdio.h>
int main(){
    int num, flag = 0, lastnum;
    printf("Enter Number to check if number is cerculer prime or not = ");
    scanf("%d", &num);

    for(int i=0; i<2; i++){
        for(int j=2; j<num;j++){
            if(num%j==0){
                printf("number is divide by %d", j);
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            break;
        }
        lastnum = num%10;
        num=num/10;
        num = (lastnum*10)+num;
    }

    if(flag == 1){
        printf("number is not curculer prime number");
    } else{
        printf("number is curculer prime number");
    }

    return 0;
}
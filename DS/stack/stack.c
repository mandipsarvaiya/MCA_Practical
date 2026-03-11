// stack - push, pop, peek, count, display opration

#include<stdio.h>
#include<stdlib.h>

int main(){
    int lenght,ch,num, top = -1, count =0;

    printf("Enter array lenght");
    scanf("%d", &lenght);

    int arr[lenght];

    do{
        printf("\n1 - push\n2 - pop\n3 - peek\n4 - count\n5 - display\n6 - exit\n");
        printf("Enter choice");
        scanf("%d", &ch);

        switch(ch){
            case 1:
                if(top == lenght-1){
                    printf("stack overflow\n");
                }
                else{
                    printf("Enter element to add = ");
                    scanf("%d", &num);

                    top++;
                    arr[top] = num;
                    printf("\"number is stored\"\n");
                }
                break;
            case 2:
                if(top == -1){
                    printf("Stack Empty\n");
                }
                else{
                    top--;
                    printf("\"number is deleted\"\n");
                }
                break;
            case 3:
                if(top==-1){
                    printf("Stack is empty");
                } else{
                    printf("peek element is %d ", arr[top]);
                }
                break;
            case 4: 
                if(top == -1){
                    printf("Stack is empty so count is 0");
                }else{
                    printf("Total number of element in stack is %d", top);
                }
                break;
            case 5:
                for(int i=0; i<top+1; i++){
                    printf("| %d ", arr[i]);
                }
                printf("\n");
                break;
            case 6: 
                exit(0);
            default:
                printf("Enter valid number");
        }
    }while(1);
    
    return 0;
}
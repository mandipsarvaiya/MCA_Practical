#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define max 100

int top = -1;
char stack[max];

void push(char ch){
    if(top == max-1){
        printf("Stack overflow\n");
    } else {
        stack[++top] = ch;
    }
}

char pop(){
    if(top == -1){
        printf("Stack underflow\n");
        return -1;
    } else {
        return stack[top--];
    }
}

int precedence(char x){
    if(x == '^')
        return 3;
    else if(x == '*' || x == '/')
        return 2;
    else if(x == '+' || x == '-')
        return 1;
    else
        return 0;
}

int main(){
    char infix[max], postfix[max];
    char ch;
    int k = 0, i;

    printf("input infix expression = ");
    fgets(infix, max, stdin);
    strrev(infix);

    for(i = 0; infix[i] != '\0'; i++){
        ch = infix[i];

        if(isalnum(ch)){
            postfix[k++] = ch;
        }
        else if(ch == ')'){
            push(ch);
        }
        else if(ch == '('){
            while(top != -1 && stack[top] != ')'){
                postfix[k++] = pop();
            }
            pop();
        }
        else{
            while(top != -1 && precedence(stack[top]) >= precedence(ch)){
                postfix[k++] = pop();
            }
            push(ch);
        }
    }

    for(; top != -1; ){
        postfix[k++] = pop();
    }
    postfix[k] = '\0';

    strrev(postfix);
    printf("Prefix expression = %s\n", postfix);

    return 0;
}

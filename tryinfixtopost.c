#include<stdio.h>
#include<stdlib.h>

int push(int *stack[],int top,char x){
    stack[++(top)]=x;
    return top;
}
char pop(int stack[],int top){
    if(top==-1)
    return -1;
    else{
        return stack[top--];
    }
}
int priority(char x){
    if(x=='(')
    return 0;
    else if(x=='-' || x=='+')
    return 1;
    else if(x=='/' || x=='*')
    return 2;
}
int main(){
    int stack[10];
int top=-1;
    char exp[10];
    char *e;
    char x;
    printf("enter the expression: ");
    scanf("%s",&exp);
    e=exp;
    while(*e != '\0'){
    if(isalnum(*e))
    printf("%c",*e);
    else if(*e=='('){
        push(&stack,top,*e);
    }
    else if(*e == ')'){
        while(x=pop(stack,top)!='('){
            printf("%c",x);
        }
    }
    else{
        while(priority(stack[top])>=priority(*e)){
            printf("%c",pop(stack,top));
        }
        push(&stack,top,*e);
    }
e++;}
while(top!=-1){
    printf("%c",pop(stack,top));
}
}
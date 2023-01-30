#include<stdio.h>
#include<stdlib.h>
char postfix[20];
float stack[20];
int top=-1;
void push(float ch){
stack[++top]=ch;
}
float pop(){
    float x;
    x=stack[top--];
    return x;
}
void main(){
float op1,op2;
int i;
printf("enter the expression \n");
scanf("%s",&postfix);
for( i=0;postfix[i]!='\0';i++){
    if(isdigit(postfix[i])){
        push(postfix[i]-48);
    }
    else{
        op2=pop();
        op1=pop();
        switch(postfix[i]){
            case '+':push(op1+op2);
            break;

            case '-':push(op1-op2);
            break;

            case '*':push(op1*op2);
            break;

            case '/':push((float)(op1/op2));
            break;

             default :printf("wrong choice\n");
        }
    }
}
printf("result :%f",stack[top]);

}
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};typedef struct node node;
void push(node *top){
    int val=0;
    node *temp=(node*)malloc(sizeof(node));
 printf("enter the value\n");
 scanf("%d",&val);
 temp->data=val;
if(temp==NULL){
    printf("stack overflow\n");
}else{
    if(top==NULL){
        top =temp;
    }
    else{
        temp->next=top;
        top=temp;
    }
}}


int main(){
    node *top=(node*)malloc(sizeof(node));
int choice;
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    while(1)
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push(arr,top);
                break;
            }
            case 2:
            {
                pop(top,arr);
                break;
            }
            case 3:
            {
                display(arr);
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
        }
    }


return 0;
}
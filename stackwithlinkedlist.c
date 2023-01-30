#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};typedef struct node node;
node *push(node *top){
    int n=0;
    node *temp=(node*)malloc(sizeof(node));

    temp->next=top;
    if(temp==NULL){
    printf("stack overflow\n");
}
else{
    printf("enter the data to push\n");
    scanf("%d",&n);
    temp->data=n;
    temp->next=top;
    top=temp;
}
return top;
}
int pop(node **top){
    int x;
    if(*top==NULL){
        printf("stack is empty\n");
    }
    else{
        node *ptr=*top;
        *top=(*top)->next;
        int x=ptr->data;
        free(ptr);
    return x;}
}
void display(node *ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
int choice,x;
node *top=(node*)malloc(sizeof(node));
do{
printf("\nenter your choice\n1.Push\n2.Pop\n3.Display\n ");
scanf("%d",&choice);

switch (choice)
{
    case 0:break;
case 1:top=push(top);
       break;

case 2: 
printf("popped element %d",pop(&top));
    break;

 case 3:display(top);
    break;

default:printf("invalid\n");
    break;};
}while(choice!=0);
return 0;
}
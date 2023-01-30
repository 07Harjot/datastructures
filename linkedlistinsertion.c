/*node *createnode(int data){
 node temp=(int*)malloc(sizeof(int));
temp->data=data;
temp->next=NULL;
return temp;
}*/ 
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};typedef struct node node;
void linkedlisttraversal(node *ptr){
    while(ptr!=NULL){
    printf("elements :%d\n",ptr->data);
    ptr=ptr->next;}
}
void search(node *ptr,int data){
    while(ptr!=NULL){
        if(ptr->data==data){
            ptr->next=NULL;
        }
        printf("elements :%d\n",ptr->data);
    ptr=ptr->next;
    }
}
node *insertionatend(node * head,int data){
    node *ptr=(node*)malloc(sizeof(node));
    
    ptr->data=data;
    node *p=head;
    while(p->next!=NULL){
p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}
node *insertionatfirst(node *head,int data){
    node *ptr=(node*)malloc(sizeof(node));
    ptr->data=data;
    ptr->next=head;
    head=ptr;
    return head;
}
node *insertioninbetween(node *head,int index,int data){
node *ptr=(node*)malloc(sizeof(node));
node *p=head;
int i=0;
while(i!=index-1){
p=p->next;
i++;
}
ptr->next=p->next;
p->next=ptr;
ptr->data=data;
return head;
}
int main(){
node *head,*second,*third;
head=(node*)malloc(sizeof(node));
second=(node*)malloc(sizeof(node));
third=(node*)malloc(sizeof(node));

head->data=7;
head->next = second;

second->data=8;
second->next = third;

third->data=9;
third->next = NULL;

//search(head,8);
//linkedlisttraversal(head);
//head=insertionatfirst(head,11);
insertionatend(head,19);
//insertioninbetween(head,2,99);
linkedlisttraversal(head);
return 0;
}
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
void linkedlisttraversal(node *head){
    node *ptr=head;
    do{
printf("elements :%d\n",ptr->data);
    ptr=ptr->next;
    }while(ptr!=head);
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
node *insertatfirst(node * head,int data){
    node *temp=(node*)malloc(sizeof(node));
    temp->data=data;
    node *p=head->next;
    while(p->next!=head)
        {
//printf("elements :%d\n",ptr->data);
    p=p->next;
    
    };
p->next=temp;
temp->next=head;
head=temp;
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
third->next = head;

//search(head,8);
//linkedlisttraversal(head);
head=insertatfirst(head,69);
linkedlisttraversal(head);
return 0;
}
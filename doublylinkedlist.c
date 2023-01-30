#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * prev;
    struct node * next;
};typedef struct node node;
node *traversal(node *head){
    node *ptr=head;
    while (ptr->next!=NULL)
    {
        printf("elements :%d\n",ptr->data);
        ptr=ptr->next;
    }
    printf("elements :%d\n",ptr->data);
    
    
}
node *rtraversal(node *head){
    node *ptr=head;
    while (ptr->prev!=NULL)
    {
        printf("elements :%d\n",ptr->data);
        ptr=ptr->prev;
    }
    printf("elements :%d\n",ptr->data);
    
    
}
int main(){
 node *head=(node*)malloc(sizeof(node));
 node *a=(node*)malloc(sizeof(node));
 node *b=(node*)malloc(sizeof(node));
 node *c=(node*)malloc(sizeof(node));
 node *d=(node*)malloc(sizeof(node));
 node *e=(node*)malloc(sizeof(node));

head->data=30;
head->prev=NULL;
head->next=a;

a->data=40;
a->prev=head;
a->next=b;

b->data=50;
b->prev=a;
b->next=c;

c->data=60;
c->prev=b;
c->next=d;

d->data=80;
d->prev=c;
d->next=e;

e->data=90;
e->prev=d;
e->next=NULL;

traversal(head);
rtraversal(e);
return 0;
}
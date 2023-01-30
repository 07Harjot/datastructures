#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};typedef struct node node;

node *deleteatfirst(node *head){
node *ptr=head;
head=head->next;
free(ptr);
return head; 
}
//deleting elements for a given value
node *deletevalue(node *head,int value){
    node *ptr=head;
    node *q=ptr->next;
    while(q->data!=value && q->next!=NULL){
        ptr=ptr->next;
        q=q->next;
    }
    if(q->data == value){
    ptr->next=q->next;
    free(q);}
    return head;
}
node *deleteatend(node *head){
    node *ptr=head;
    node *temp=ptr->next;
    while(temp->next!=NULL){
        ptr=ptr->next;
        temp=temp->next;
    }
    ptr->next=NULL;
    free(temp);
    return head;
}
node *middle(node *head,int index){
    node *ptr=head;
    node *q=head->next;
    int i=0;
    while(i!=index-1){
        ptr=ptr->next;
        q=q->next;
        i++;
    }
    ptr->next=q->next;
    free(q);
    return head;

}
void traversal(node *head){
 node *ptr=head;
while (ptr->next!=NULL)
{
    printf("%d ",ptr->data);
    ptr=ptr->next;
}

}
int main(){
node *head=(node*)malloc(sizeof(node));
node *first=(node*)malloc(sizeof(node));
node *second=(node*)malloc(sizeof(node));
node *third=(node*)malloc(sizeof(node));
node *fourth=(node*)malloc(sizeof(node));

head->data=12;
head->next=first;

first->data=16;
first->next=second;

second->data=18;
second->next=third;

third->data=19;
third->next=fourth;

fourth->data=40;
fourth->next=NULL;
traversal(head);
//head =deleteatfirst(head);
//head =deleteatend(head);
//head=middle(head,1);
deletevalue(head,16);
printf("after deletion \n");
traversal(head);
return 0;
}
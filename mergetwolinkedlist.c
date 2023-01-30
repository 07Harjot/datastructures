#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};typedef struct node node;
node *merge(node *head1,node *head2){
node *temp=head1;
node *temp2=head1->next;
while(temp2->next!=NULL){
    temp=temp->next;
    temp2=temp->next;
}
temp2->next=head2;
return temp;

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
node *head1=(node*)malloc(sizeof(node));
node *head2=(node*)malloc(sizeof(node));
node *first=(node*)malloc(sizeof(node));
node *second=(node*)malloc(sizeof(node));
node *third=(node*)malloc(sizeof(node));
node *fourth=(node*)malloc(sizeof(node));

head1->data=12;
head1->next=first;

first->data=16;
first->next=second;

second->data=18;
second->next=third;

third->data=19;
third->next=fourth;

fourth->data=40;
fourth->next=NULL;

node *first2=(node*)malloc(sizeof(node));
node *second2=(node*)malloc(sizeof(node));
node *third2=(node*)malloc(sizeof(node));
node *fourth2=(node*)malloc(sizeof(node));

head2->data=23;
head2->next=first2;

first2->data=26;
first2->next=second2;

second2->data=28;
second2->next=third2;

third2->data=29;
third2->next=fourth2;

fourth2->data=80;
fourth2->next=NULL;
head = merge(head1,head2);
traversal(head);
return 0;
}
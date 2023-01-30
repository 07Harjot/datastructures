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
void reverse(node *head,node *end,node *temp){

temp=head;
head=end;
end=temp;
reverse(head+1,end-1,temp);
}
int main(){
node *head,*second,*third;
head=(node*)malloc(sizeof(node));
second=(node*)malloc(sizeof(node));
third=(node*)malloc(sizeof(node));
node *temp=(node*)malloc(sizeof(node));
head->data=7;
head->next = second;

second->data=8;
second->next = third;

third->data=9;
third->next = NULL;

//search(head,8);
linkedlisttraversal(head);
reverse(head,third,temp);
linkedlisttraversal(head);
return 0;
}
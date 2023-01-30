#include<stdio.h>
void push(int top,int arr[]){
    if(top==sizeof(arr)){
    printf("stack overflow\n");
    }
    else{
        top++;
        printf("enter the element:");
        scanf("%d",&arr[top]);
    }
}
void pop(int top,int arr[]){
if(top==-1){
    printf("stack empty\n");
}
else{
    printf("deleted element:%d",arr[top--]);
}
}
void display(int arr[]){
    printf("elements present in stack are ");
    for(int i=0;i<sizeof(arr);i++){
        printf("%d",arr[i]);
    }
}

int main(){
 int top=-1;
 int choice=0,n;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    int arr[n];
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
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
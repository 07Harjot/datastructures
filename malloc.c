#include<stdio.h>
#include<stdlib.h>
int main(){
float *ptr;
ptr=(float*)malloc(5*sizeof(float));
for(int i=0;i<5;i++){
    scanf("%f",&ptr[i]);
}
printf("the elements are\n");
for(int i=0;i<5;i++){
    printf("%f ",ptr[i]);
}
return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter the size\n");
    scanf("%d",&n);
float *ptr;
ptr=(float*)calloc(n,sizeof(float));
for(int i=0;i<n;i++){
    printf("%f ",ptr[i]);
}
free(ptr);
return 0;
}
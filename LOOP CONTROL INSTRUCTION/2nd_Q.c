#include<stdio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int i;
    
    printf("%d",i);
    for(i=10;i>=0;i--){
        printf("%d X %d = %d \n",num,i,num*i);

    }
    return 0;
}
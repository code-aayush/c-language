#include<stdio.h>
int main(){
    int i;
    printf("Enter a number : ");
    scanf("%d",&i);
    int n=0;
    for(n=0;n<=10;n++){
        printf("%d X %d = %d \n",i,n,i*n);
    }
    return 0;

}
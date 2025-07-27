#include<stdio.h>
int main(){
    int num;
    int i;
    int fac;
    fac=1;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(i=num;i>=1;i--){
        
        fac=fac*i;

    }
    printf("%d",fac);

} 
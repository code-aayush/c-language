#include<stdio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int fac;
    fac=1;
    int i;
    i=num;
    while(num>=1){
        
        fac=fac*num;
        num--;
        

    }
    printf("%d",fac);
}
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int i;
    int sum=0;
    int multi;
    for (i = 1  ; i <=10; i++)
    {
        multi=num*i;
        sum+=multi;
    }
    printf("Sum of numbers occuring in table of %d = %d",num,sum);


}

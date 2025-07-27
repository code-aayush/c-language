#include<stdio.h>
int main(){
    int i;
    i = 0;
    int sum=0;
    do 
    {
        i++;
        sum+=i;    
    }while (i<=9);
    printf("The sum of first 10 digits is : %d \n",sum);
      
}
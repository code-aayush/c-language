#include<stdio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int i;
    i=num;
    int rem;
    while(i>=0){

        rem=num%i;
        if(rem==0 && i==1 && i==num){
            printf("Number is prime");
            break;
        }
        else if(rem==0 && i!=num) {
            printf("Number is not prime");
            break;
        }
        i++;

       
    }

}
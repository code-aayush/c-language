#include<stdio.h>
int main(){
    int year;
    printf("Enter year : ");
    scanf("%d",&year);
    if(year%4==0){
        printf("The year %d is a leap year",year);
    }
    else{
        printf("The year %d is not a leap year",year);
    }
}
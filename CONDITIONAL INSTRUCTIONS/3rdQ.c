#include<stdio.h>
int main(){

    float income;
    printf("Enter you annual income in lakhs : ");
    scanf("%f",&income);

    if(income>=2.5 && income<=5.0){
        printf("You have to pay 5%% tax on your income which will be %f lakhs",income*0.05);
    }
    else if (income>5.0 && income<=10.0)
    {
         printf("You have to pay 20%% tax on your income which will be %f lakhs",income*0.20);
    }
    else if(income>10.0){
         printf("You have to pay 30%% tax on your income which will be %f lakhs",income*0.30);
    }
    else{
         printf("You dont have to pay tax");
    }


}
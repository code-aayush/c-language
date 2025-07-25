//Q-4 Write a program to calculate simple interest for a set of values representing principal, number of years and rate of interest.
#include<stdio.h>
int main(){
    int P;
    int R;
    int T;
    printf("Enter principal amount for interest:");
    scanf("%d",&P);
    printf("Enter Rate of interesrt:");
    scanf("%d",&R);
    printf("Enter Number of days:");
    scanf("%d",&T);
    float SI=(P*R*T)/100;
    
    printf("The Simple Interest is %f",SI);
    return 0;

}

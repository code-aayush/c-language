//Q3-Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit).
#include<stdio.h>
int main(){
    int c;
    scanf("%d",&c);
    float F;

    F=(c*9/5)+32;
    printf("Celsius to Fahrenheit is %f",F);
    return 0;
    
}

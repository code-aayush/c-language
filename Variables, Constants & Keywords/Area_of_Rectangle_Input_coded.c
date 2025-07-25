//Q1.b Write a C program to calculate area of a rectangle: Using input coded inputs.
#include<stdio.h>
int main(){
    int L;
    printf("Enter Lenght of the rectangle\t");
    scanf("%d",&L);
    int B;
    printf("Enter breadth of the rectangle\t");
    scanf("%d", &B);
    int C = L*B;
    printf("The area of rectangle is %d",C);
    return 0;
    

}

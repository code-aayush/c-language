#include <stdio.h>

int main(){
    int r,h;
    printf("Enter radius = ");
    scanf("%d",&r);
    printf("The area of cirlce with radius %d is %f \n",r,3.14*r*r);
    printf("Enter height of cylinder = ");
    scanf("%d",&h);
    printf("The volume of cylinder with height %d and radius %d is %f", h ,r,3.14*r*r*h);
    return 0;

}

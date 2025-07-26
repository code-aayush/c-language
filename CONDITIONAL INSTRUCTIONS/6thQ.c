#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);
    printf("Enter value of c : ");
    scanf("%d",&c);
    printf("Enter value of d : ");
    scanf("%d",&d);

    if(a>b && a>c && a>d){
        printf("A is the greatest number");
    }
    else if(b>a && b>c && b>d){
        printf("B is the greatest number");
    }
    else if(c>a && c>b && c>d){
        printf("C is the greatest number");
    }
    else if(d>b && d>c && d>a){
        printf("D is the greatest number");

    }
    else{
        printf("There is a tie in greatest number");
        
    }
}

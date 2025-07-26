#include<stdio.h>
int main(){
    float Physics;float Chemistry;float Maths;
    printf("Enter marks obtained in Physics : ");
    scanf("%f",&Physics);
    printf("Enter marks obtained in Chemistry : ");
    scanf("%f",&Chemistry);
    printf("Enter marks obtained in Maths : ");
    scanf("%f",&Maths);
    float result=((Physics+Maths+Chemistry)/300)*100;
    printf("You got %f percentage\n",result);

    if(result>=40 && Physics>=33 && Maths>=33 && Chemistry>=33){
        printf("You passed with %f percentage.\n",result);
    }
    else{
        printf("You failed.\n ");

    }
}
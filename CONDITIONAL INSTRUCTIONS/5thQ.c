#include<stdio.h>
int main(){
    char Letter;
    printf("Enter a character : ");
    scanf("%c",&Letter);
    printf("The entered letter is : %c\n",Letter);
    int a;
    a= ("%d",Letter);

    if(a>=97 && a<=122){
        printf("The given letter is in lower case\n");
    }
    else{
        printf("The gven letter is in upper case\n");
    }

    

}
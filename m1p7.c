//Enter two numbers from the keyboard. Write a program to check if the two numbers are equal.
#include <stdio.h>
int main(){
    int num1,num2;
    scanf("%d %d", &num1, &num2);
    if(num1==num2){
        printf("The numbers are equal.");
    }
    else{
        printf("The numbers are not equal.");
    }
    return 0;
}
//Write a program to enter the values of two variables 'a' and 'b' from keyboard and then check if both the conditions 'a < 50' and 'a < b' are true.
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    if(a<50 && a<b){
        printf("both conditions are true");
    }
    else if(a<50 && a>=b){
        printf("%d is less than 50 but %d is not less than %d ", a, a,b);
    }
    else if(a>=50 && a<b){
        printf("%d is greater or equal to 50 and %d is less than %d",a,a,b);
    }
    else{
        printf("none of the conditions are true");
    }
    return 0;
}
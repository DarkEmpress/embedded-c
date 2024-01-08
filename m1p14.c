//Write a program to calculate the sum of the first and the second last digit of a 5 digit number entered from the keyboard.(User input)
#include <stdio.h>
# include <stdio.h>
int main()
{
    int num;
    printf("enter a 5 digit number");
    scanf("%d",&num);
    if(num>=10000 && num<=99999){
        printf("the entered number is %d\n",num);
        int num1=num/10000;
        int num5=num%10000;
        printf("first digit= %d\nlast digit= %d\n", num1, num5);
        printf("%d+%d=%d", num1,num5, num1+num5);

    }
    else{
        printf("invalid number");
    }
    return 0;
}
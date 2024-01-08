//Write a program to calculate the sum of the digits of a 3-digit number which is entered from keyboard. .(User input) 
//E.g.- INPUT : 132        OUTPUT : 6
# include <stdio.h>
int main()
{
    int num;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    if(num>=100 && num<=999){
        int num1, num2, num3;
        num1 = num % 10;
        num2 = ((num-num1)%100)/10;
        num3 = num/100;
        printf("%d", num1+num2+num3);
    }
    else{
        printf("The number must have exactly 3 digits.");
    }
    return 0;
}
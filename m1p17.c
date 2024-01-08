//Write a program to reverse a 3-digit number which is entered from keyboard. .(User input)
// E.g.-INPUT : 132        OUTPUT : 231
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
        num= (num1*100)+(num2*10)+num3;
        printf("%d", num);
    }
    else{
        printf("The number must have exactly 3 digits.");
    }
    return 0;
}
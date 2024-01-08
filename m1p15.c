//Suppose you entered a 4 digit number. 
//Write a program to display a number whose digits are 2 greater than the corresponding digits of the entered number.(User input)
//For example, if he entered number is 5696, then the displayed number should be 7818.
# include <stdio.h>
int main()
{
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    if(num>=1000 && num<=9999){
        int num1, num2, num3, num4;
        num1 = num % 10;
        num2 = ((num-num1)%100)/10;
        num3 = (((num - num1)-num2)%1000)/100;
        num4 = num/1000;
        num1= (num1+2)%10;
        num2= (num2+2)%10;
        num3= (num3+2)%10;
        num4= (num4+2)%10;
        num=num4*1000+num3*100+num2*10+num1;
        printf("%d", num);
    }
    else{
        printf("The number must have exactly four digits.");
    }
    return 0;
}
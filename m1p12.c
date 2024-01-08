//Write a program to convert Celsius into Fahrenheit. (F = (9/5)*C+32).
#include <stdio.h>
int main(){
    float celsius;
    printf("enter the temperature in celsius: ");
    scanf("%f", &celsius);
    printf("The temperature in farenheit: %.2f", (9.0/5.0)*celsius+32.0);
    return 0;
}
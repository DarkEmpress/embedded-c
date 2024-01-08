/*Write a program to enter a 4 digit number from keyboard. Add 8 to the number and then divide it by 3. Now, the modulus of that number is taken
 with 5 and then multiply the resultant value by 5. Display the final result.
*/
#include<stdio.h>
int main(){
    int num;
    printf("enter a 4 digit number:");
    scanf("%d",&num);
    if(num>999 && num<10000){
        int sum=num+8;
        int div=sum/3;
        int mod=div%5;
        printf("The final result is:%d\n",mod*5);
    }
    return 0;
}
//If the marks of Robert in three subjects are 78,45, and 62, respectively (each out of 100 ), write a program to calculate his total marks 
//and percentage marks.(input from user).
 #include <stdio.h>
 int main(){
    char name[60];
    int sub1, sub2, sub3;
    printf("Enter your Name: ");
    scanf("%s", &name);
    printf("\nEnter Marks in Subject 1 :");
    scanf("%d",&sub1);
    printf("Enter Marks in Subject 2 :");
    scanf("%d",&sub2);
    printf("Enter Marks in Subject 3 :");
    scanf("%d",&sub3);
    printf("total marks= %d\n",sub1+sub2+sub3);
    printf("percentage= %.2f", (sub1+sub2+sub3)/3.0);
    return 0;
 }
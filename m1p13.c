//The total number of students in a class are 45 out of which 25 are boys. 
//If 80% of the total students secured grade 'A' out of which 15 are boys, 
//then write a program to calculate the total number of girls getting grade 'A'.
#include <stdio.h>
int main(){
    float total, boys, A,bA, gA;
    printf("enter : total, boys,a grade %, boys with A grade");
    scanf("%f %f %f %f", &total,&boys,&A, &bA);
    /* calculating the number of girls who got grade 'A' */
    A=A/100.0;
    gA = (A*total)-bA;
    printf("Girls with A grade: %.0f", gA);
    return 0;
}
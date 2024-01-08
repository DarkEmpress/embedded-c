//The length and breadth of a rectangle are 5 and 7, respectively. Write a program to calculate the area and perimeter of the rectangle. (value should be entered by the user)
#include <stdio.h>
int main(){
    int l,b;
    printf("Enter the length of the rectangle: ");
    scanf("%d",&l);
    printf("\nEnter the breadth of the rectangle: ");
    scanf("%d",&b);
    if(l > 0 && b > 0) {
        printf("\nArea = %dx%d = %d",l,b,(l*b));
        printf("\nPerimeter = 2(%d+%d) = %d",l,b,2*(l+b));
    }
    else{
        printf("\nInvalid input");
    }
}
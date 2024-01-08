//Write a program to input the value of the radius of a circle from keyboard and then calculate its perimeter and area.
#include <stdio.h>
#include <math.h>
int main(){
    float radius;
    float pi= M_PI;
    printf("Enter the value of radius: ");
    scanf("%f", &radius);
    printf("\narea=PI*radius*radius= %f*%f*%f=%.2f",pi, radius,radius,pi*radius*radius);
    printf("\nperimeter=2*PI*radius= 2*%f*%f=%.2f",pi,radius,2*pi*radius);
    return 0;

}
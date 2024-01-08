//Write a program to Swap Two Numbers entered by the user.
#include <stdio.h>
int main(){
    int x,y;
    scanf("%d %d", &x,&y);
    printf("Before swapping: x = %d y = %d\n", x,y);
    int z;
    z=x;
    x=y;
    y=z;
    printf("After swapping: x = %d y = %d\n", x,y);
    return 0;
}
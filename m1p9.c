//Now solve the above question to check if atleast one of the conditions 'a < 50' and 'a < b' is true.
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    if(a<50 && a<b){
        printf("both conditions are true");
    }
    else if((a<50 && a>=b)||(a>=50 && a<b)){
        printf("one of the conditions are true");
    }
    else{
        printf("none of the conditions are true");
    }
    return 0;
}
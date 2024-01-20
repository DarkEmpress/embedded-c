#include <stdio.h>
int main(){
	int num, h,t,o;
	printf("enter the number: ");
	scanf("%d", &num);
	if(num>=100 &&num<=999){
		h=num/100;
		t=((num%100)-(num%100)%10)/10;
		o=num%100-(t*10);
		o=o*100;
		t=t*10;
		num=o+t+h;
		printf("AFTER REVERSING: %d",num);
	}
	else{
		printf("enter 3 digit number");
	}
}

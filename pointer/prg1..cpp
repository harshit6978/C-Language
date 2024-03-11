#include<stdio.h>

int main(){
	
int *a,*b,c;

	printf("enter a first number:");
	scanf("%u => %d\n",a,*b);
	
	printf("enter a second number:");
	scanf("%u => %d\n",b,*b);
	
	c=*a;
	*a=*b;
	*b=c;

	return 0;	
}

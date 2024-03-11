
#include<stdio.h>
#include<conio.h>
int main(){
	
	int c;
	int a;
	
	printf("enter your Celsius:");
	scanf("%d",&c);

	a= c * 1.8 + 32;
	
	printf(" your  Fahrenheit: %d",a);
	return 0;
}

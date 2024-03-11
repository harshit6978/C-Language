#include<stdio.h>
#include<conio.h>
int main(){
	float p;
	float r;
	float t;
	float area;
	
	
	printf("enter your principal amount:");
	scanf("%f",&p);
	printf("enter your intrest:");
	scanf("%f",&r);
	printf("enter your time period:");
	scanf("%f",&t);
	
	
	area= p * r/100 * t;
	
	printf("total intrest: %f",area);
	
	return 0;
}

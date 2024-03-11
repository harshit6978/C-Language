#include<stdio.h>
#include<conio.h>
int main(){
	float pi=3.14;
	float r;
	float area;
	
	
	printf("enter your value:");
	scanf("%f",&r);

	area= 2 * pi * r;
	
	printf("Peremeter of circle value: %f",area);
	
	return 0;
}

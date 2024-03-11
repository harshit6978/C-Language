#include<stdio.h>
#include<conio.h>
int main(){
	float b;
	float h;
	float area;
	
	
	printf("enter value of base:");
	scanf("%f",&b);
	printf("enter value of height:");
	scanf("%f",&h);
	
	area=b * h /2;
	
	printf("area of rectangle: %f",area);
	
	return 0;
}

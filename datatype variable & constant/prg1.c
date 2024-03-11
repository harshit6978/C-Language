#include<stdio.h>
#include<conio.h>
int main(){
	float pi=3.14159;
	int r;
	float area;
	
	
	printf("enter value:");
	scanf("%d",&r);
	area=pi * r *r;
	
	printf("area of circle: %f",area);
	
	return 0;
}

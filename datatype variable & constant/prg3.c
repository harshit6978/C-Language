#include<stdio.h>
#include<conio.h>
int main(){
	float w;
	float l;
	float area;
	
	
	printf("enter value of width:");
	scanf("%f",&w);
	printf("enter value of length:");
	scanf("%f",&l);
	area=w*l;
	
	printf("area of rectangle: %f",area);
	
	return 0;
}

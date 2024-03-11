#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	int b;
	
	printf("enter a:");
	scanf("%d",&a);
	
	printf("entre b:");
	scanf("%f",&b);
	
	a=b;
	b=a;

	printf("value: a=%d,b=%f", a,b);	
	return 0;
	
}

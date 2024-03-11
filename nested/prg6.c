#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c,d;
	
	printf("Enter A:  ");
	scanf("%d",&a);
	printf("Enter B:  ");
	scanf("%d",&b);
	printf("Enter C:  ");
	scanf("%d",&c);
	printf("Enter D:  ");
	scanf("%d",&d);
	
	a>b?
		a>c?
			a>c?
			printf("a is max")
			:
			printf("d is max")
	
	
	:
		c>d?
			printf("c is max")
			:
			printf("d is max")
			
	:
		b>c?
			b>d?
			printf("b is max")
			:
			printf("d is max");	
			
	return 0;
}

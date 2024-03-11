#include<stdio.h>

int main(){
	
	int n;
	int *b;
	
	
	printf("enter a number:");
	scanf("%u",&n);
	b=&n;
	
	printf("%u", *b);
}

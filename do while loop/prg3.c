#include<stdio.h>
#include<conio.h>
int main(){
	
	int i=1,n;
	printf("enter a number:");
	scanf("%d",&i);
	
	do{
		printf("%d\n",n);
		n++;
	}
	while(i>=n);
	
	return 0;
}

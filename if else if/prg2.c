#include<stdio.h>
#include<conio.h>
int main(){
	
	int a;
	int b;
	
	printf("Enter A:");
	scanf("%d",&a);
	printf("Enter B:");
	scanf("%d",&b);
	
	if(a<b){
		printf("A value is a short");
	}
	else{
		printf("B value is a short");
	}
	return 0;
}

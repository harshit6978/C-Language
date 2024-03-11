#include<stdio.h>
#include<conio.h>
int main(){
	
	int gross;
	int hra;
	int da;
	int ta;
	int price;
	
	printf(" enter your gross salary:");
	scanf("%d",&gross);
	
	printf(" enter your hra:");
	scanf("%d",&hra);
	
	printf(" enter your da:");
	scanf("%d",&da);
	
	printf(" enter your ta:");
	scanf("%d",&ta);
	
	price= gross + hra + da+ ta;

	printf("your amount: %d",price);
	return 0;
}

#include<stdio.h>
#include<conio.h>
int main(){
	
	int a,b,c;
	
	printf("enter A:");
	scanf("%d",&a);
	printf("enter B:");
	scanf("%d",&b);
	printf("enter C:");
	scanf("%d",&c);
	
	if(a<b){
		if(a<c){
			printf("A Is smaller");	
		}
		else{
			printf("C is smaller");
		}
	}
	
	else{
		if(b<c){
		printf("B is smaller");
		}
		else{
		printf("C is smaller");
		}
	}


	return 0;
}

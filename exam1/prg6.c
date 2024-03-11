#include<stdio.h>


void cal(int a, int b){
	
	printf("%d",a+b);

	printf("%d",a-b);
	
	printf("%d",a*b);
	
	printf("%d",a/b);	
}

int main(){
	
	int a,b,cal=0;
	
	printf("enter a number of a:");
	scanf("%d",&a);
	
	printf("enter a number of b:");
	scanf("%d",&b);
	
	printf("entre a selection +,-,*,/");
	
	switch(cal){
		
		case '+':
			cal=a+b;
			printf("%d",cal);
			
			break;
			
		case '-':
			cal=a-b;
			break;
			
		case '*':
			cal=a*b;
			break;
			
		case '/':
			cal=a/b;
			break;
					
	}
	
	
	return 0;
}

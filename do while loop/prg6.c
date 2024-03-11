#include<stdio.h>
#include<conio.h>
int main(){
	
	int i=1;
	
	printf("enter number:");
	scanf("%d",&i);
	do{
		if(i%2==0){
			printf("%d\n",i);
			}
		i--;
	}
	while(i>=1);
	
	
	return 0;
}

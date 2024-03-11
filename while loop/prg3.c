#include<stdio.h>
#include<conio.h>
int main(){
	
	int number,i;
	printf("enter a number:");
	scanf("%d",&number);
	
	i=1;
	while(i<=number){
		
		printf("%d\n",i);
		
		i++;
	}
	return 0;
}

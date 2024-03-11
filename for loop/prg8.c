#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,n,sum=0;
	printf("enter number:");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
				sum = sum + i;  	  	
		}
			 printf(" \n Sum of %d number is : %d", n, sum); 
	return 0;
}

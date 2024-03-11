#include<stdio.h>
#include<conio.h>
int  main(){
	
	char c,r;
	
	for(r='A'; r<='E'; r++){
		for(c='A'; c<=r; c++){
			printf("%c",c);
		}
		printf("\n");
	}
	return 0;
}

#include<stdio.h>
#include<conio.h>
int main(){  
    int num, i, sum = 0;
    printf("Enter a positive number : ");  
    scanf("%d", &num);
    i = 0;  
    while (i <= num) 
    {  
        sum = sum + i;  
        i++; 
    }  
  
    printf(" \n Sum of number is : %d", num, sum);  
		return 0;
}  

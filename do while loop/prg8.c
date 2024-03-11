#include <stdio.h>  
#include <conio.h>  
void main()  
{  
    int num, i, sum = 0;   
    printf("Enter a positive number: ");  
    scanf("%d", &num); 
    i = 0;  
    do  
    {  
        sum = sum + i; 
        i++;    
    } while (i <= num); 
       
    printf(" \n Sum of first %d number is : %d", num, sum);  
		return 0; 
}  

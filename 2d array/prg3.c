#include<stdio.h>
#include<conio.h>


int main()
{
	int r,c;
	
	printf("enter number of row   :");
	scanf("%d",&r);
	printf("enter number of colmn :");
	scanf("%d",&c);
	
	int a[r][c],i,j,count = 0,average,sum =0;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		} 
		printf("\n");
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
			count++;
			sum = sum + a[i][j];
			average = sum / count;
		}  
		 printf("\n");
		 
	}
		printf(" \n length of array :%d",count);
		printf("\n sum :%d",sum);
		printf("\n  average : %d",average);
		
	
	return 0;
}


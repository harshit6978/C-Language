#include<stdio.h>
#include<conio.h>
int main(){
	
	int month;
	
	printf("1.january\n2.february\n3.march\n4.april\n5.may\n6.june\n7.july\n8.agaust\n9.novamber\n10.decamber\n\n");
	printf("Enter your monthx:  ");
	scanf("%d",&month);
	
	switch(month){
	
	case 1:
	printf("january");
	break;
	
	case 2:
	printf("february");
	break;
	
	case 3:
	printf("march");
	break;
	
	case 4:
	printf("april");
	break;

	case 5:
	printf("may");
	break;
	
	case 6:
	printf("june");
	break;
	
	case 7:
	printf("july");
	break;
	
	case 8:
	printf("augaust");
	break;
	
	case 9:
	printf("novamber");
	break;
	
	case 10:
	printf("decamber");
	
	default:
	printf("invalid enter");
	}
	return 0;
}

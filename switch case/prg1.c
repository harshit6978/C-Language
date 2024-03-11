#include<stdio.h>
#include<conio.h>
int  main(){
	
	int food;
	printf("food menu\n");
	printf("1.pizza\n");
	printf("2.sandwitch\n");
	printf("3.thikshak\n");
	
	printf("enter your food number:  \n");
	scanf("%d",&food);
	
	switch(food){

	case 1:
		printf("pizza");
		
		printf("food menu:  ");
		scanf("%d",&food);
		
		switch(food){
			case 1:
				printf("margerita pizza\n");
				printf("paneer pizza\n");
				printf("tanduri pizza\n");
		}
		break;
		
	case 2:
	printf("sandwitch");
		
	printf("food menu:  ");
	scanf("%d",&food);
		
		switch(food){
			case 2:
				printf("grill sandwitch\n");
				printf("open tost sandwitch\n");
				printf("cheese sandwitch\n");
		}
		break;
		
		
	case 3:
	printf("thikshake");
		
	printf("food menu:  ");
	scanf("%d",&food);
		
		switch(food){
			case 3:
				printf("mango thikshake\n");
				printf("choclate thikshake\n");
				printf("oreo thikshake\n");
		}
		
				
	}	
	return 0;
}

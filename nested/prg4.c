#include<stdio.h>
int main()
{
  
   int a,b,c,d,e, small;

   	printf("Enter A:");
	scanf("%d",&a);
	
	printf("Enter B:");
	scanf("%d",&b);
	
	printf("Enter C:");
	scanf("%d",&c);
	
	printf("Enter D:");
	scanf("%d",&d);
	
	printf("Enter E:");
	scanf("%d",&e);
  

 
    if(a<b)
      {  if(a<c)
          {
              if(a<d)
              {
                if(a<e)
                  printf("a is min");
                else
                  printf("e is min");
              }
              else
              {
                if(d<e)
                	printf("d is min");
                else
                    printf("e is min");
              }

          }
          else
          {  if(c<d)
               {
                    if(c<e)
                       printf("c is min");
                    else
                        printf("e is min");
               }
             else
             {
                 if(d<e)
                    printf("d is min");
                 else
                    printf("e is min");
             }

            }
      }
    else
      { if(b<c)
           {
               if(b<d)
               { if(b<e)
                   printf("b is min");
                 else
                   printf("e is min");
               }
               else
               { if(d<e)
                  printf("d is min");
                 else
                    printf("e is min");
               }
           }
           else
           { if(c<d)
               { if(c<e)
                   printf("c is min");
                 else
                   printf("e is min");
               }
              else
              { if(d<e)
                   printf("d is min");
                else
                   printf("e is min");
              }
           }
      }

    return 0;
} 


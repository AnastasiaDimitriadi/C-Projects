#include <stdio.h>

int main()
{
    int N,i,j,telikoPlatosSkalas=2,torinoPlatosSkalas=2;
    printf("Dwse upsos skalas\n");
    printf("Oi times poy mporei na parei einai [6-20]:");
    scanf("%d", &N);
    
    if(N>=6&&N<=20)
    {
    
    	for (i = 1; i < N; i++)
		{
       		 telikoPlatosSkalas++;
    	}
     
   		 for (i = 0; i < telikoPlatosSkalas + N - 2; i++)
		{
   		     printf(" ");
   		}
   		
   		 printf("***");
   		 printf("\n");
   		 for (i = 0; i < telikoPlatosSkalas + N - 1; i++)
		{
      	  printf(" ");
   		}
   		 printf("**");
   		 printf("\n");
    
  		  for (i = 0; i < N; i++)
			{
  	      		for (j = 0; j < telikoPlatosSkalas - torinoPlatosSkalas; j++)
				{
           			printf(" ");
       			}
      	  		for (j = 0; j < torinoPlatosSkalas; j++)
				{
           		 	printf("*");
       		 	}
       	  		for (j = 0; j < N; j++)
				{
           		 	printf(" ");
       		 	}
        	printf("*");
        	printf("\n");
        	torinoPlatosSkalas++;
    		}
	}
	else 
	printf("Den edwses epitrepth timh");
    return 0;
}

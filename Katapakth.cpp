#include<stdio.h>
int main()
{
	int N,Z,i,j;
	printf("Dwse enan arithmo metaksy:[3-18]");
	scanf("%d",&N);
	Z=N+2;
	
	if(N>=3&&N<=18)
	{
		for(i=1; i<=Z; i++)
			printf("*");
			
		printf("\n ");
		
		for(i=1; i<=N; i++)
    	{
			for(j=1; j<=N; j++)
			{
            	if(i==1 || i==N || j==1 || j==N)
            		printf("*");
            	else
	                printf(" ");
        	}
        	printf("\n ");
		}
    }
    else
    	printf("Den edwses epitrepomenh timh:");
	
    return 0;
}

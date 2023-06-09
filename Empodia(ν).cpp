#include <stdio.h>
int main()
{
    int N,B,i, keno, k=0;

    printf("Dwse enan arithmo metaksy [2-10]: ");
    scanf("%d",&N);
    B=2*N;
    
	if(N>=2&&N<=10)
	{
	
    	for(i=1; i<=N; i++, k=0)
   	 {
        	for(keno=1; keno<=B-i; keno++)
        	{
           	 printf("  ");
        	}

      		 while(k != 2*i)
        	{
           		printf(" *");
            	k++;
        	}

       		 printf("\n");
     }
	}
	else
	printf("Den edwses epitrepti timh:");
    return 0;
}

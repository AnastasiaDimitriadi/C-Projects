#include <stdio.h>
int main()
{
    int N,P,B,G,B1,i,kena,star,p=0;

    printf("Dwse enan arithmo anamesa sto [3-15]: ");
    scanf("%d",&N);
    P=N+3; 											//bash:N+(N-1)
	B=N+N-2;
	
	
    for(i=1; i<=N; ++i, p=0)
    {
        for(kena=1; kena<=N-i;kena++)
        {
            printf(" ");
        }

        while(p != 2*i-1)
        {
            printf("*");
            ++p;
        }

        printf("\n");
    }
   	 printf(" *");
   	 
   	 G=2*N-5;                            //-5 ta kena apo to prwto asteri 
   		for(i=1;i<=1;i++)
		{
			for(kena=1;kena<=G;kena++)
			{
				printf(" ");
			}
			printf("*");
		}
	
}
return 0;

#include<stdio.h>
int main()

{
int N,M,B,i,x,star,kena;
printf("Dwse to ypsos kai to platos tou manitariou:\n");
printf("To ypsos mporei na parei tis time [3-20]\n");
printf("To platos mporei na parei tiw times [6,8,10,...,28]\n");
printf("Ypsos:");
scanf("%d",&N);
printf("\n");
printf("Platos:");
scanf("%d",&M);

if(N>=3&&N<=20)
	{
		if(M%2==0)
		{
			for(i=1;i<=M;i++)
			{
				printf("*");
			}
				printf("\n");

				B=M/2-1;

				for(x=1;x<=N;x++)
					{
						for(star=1;star<3;star++)
							{
								for(kena=1;kena<=B;kena++)
									{
										printf(" ");
									}
								printf("**");
								break;
							}
							printf("\n");
					}
		}
		else
		printf("Den edwses apodekti timh");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int N,F,G,i,j,kena,k=0;
	
	printf("Dwse enan arithmo gia to ypsos tou louloudiou\n");
	printf("Oi times pou mporei na parei to louloudi einai[7,9,11,...,23]:");
	scanf("%d",&N);

	if(N%2==1)
	{
			F=(N-3)/2;						//Oi pleyres toy panw-katw trigwnou
		for(i=1;i<=F;i++, k=0)
		{
			for(kena=1;kena<=F-i;kena++)
			{
					printf(" ");			// 2KENA MPROSTINA KENA
			}
			
			while(k!=2*i+1)
			{
				printf("*");				//1 KENO METAKSY ASTERIWN GIA TO PANW ASTERI
				k++;
			}
		
		printf("\n");
		}
		
		{
			for(i=F;i>=1;i--)
			{
				for(kena=0;kena<F-i;kena++)
				printf(" ");                        // EIXE 2 KENA MPROSTINA KENA
				for(j=i;j<=2*i+1;j++)
				printf("*");						//KENA METAKSY ASTERIWN
				for(j=0;j<i-1;j++)
				printf("*");
				printf("\n");
			}
		}
		for(i=0;i<=0;i++)
		{
			for(kena=0;kena<F;kena++)
			{
				printf(" ");
			}
			printf("*");
		}
		
		printf("\n");
		G=(N-2)-5;                             //typos gia kena proteleytaias seiras
		
		for(i=1;i<=1;i++)
		{
			for(kena=1;kena<=G/2;kena++)
			{
				printf(" ");
				
			}
			printf("* * *\n");
		}
		
		for(i=1;i<=1;i++)
		{
			for(kena=1;kena<=G/2+1;kena++)
			{
				printf(" ");
			}
			printf("***");
		}
	}
	else
	printf("Den edwses apodekth timh");
}

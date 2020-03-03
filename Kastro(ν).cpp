 #include<stdio.h>
int main()
{
    int N,Z,F, i, j, star, kena;

    printf("Dwse enan arithmo metaksy [3-15]:");           //o xrhsths dhlwnei kena//
    scanf("%d", &kena);
    N=kena+(kena+1);                                    //ta kena + ta asterakia. star=kena +1//
    Z=(kena+1)-3;                                      //ta epipeda//
    F=kena-1;                                          //ta asterakia bashs//

    if(kena>=3&&kena<=15)
    {

        for(star=1; star<=N-kena; star++)
        {

            printf("*");
            printf(" ");

        }
        printf("\n");
        for(j=1; j<=Z; j++)
        {
            for(star=1; star<=N; star++)
            {
                printf("*");
            }
            printf("\n");                                                  //mexri edw leitourgei apsoga//
        }
        for(j=1; j<=2; j++)
        {
            for(star=1; star<=F; star++)
            {
                printf("*");
            }
            for(i=1; i<=3; i++)
            {
                printf(" ");
            }
            for(star=1; star<=F; star++)
            {
                printf("*");
            }
            printf("\n");
        }
    }


    else
        printf("Den edwses epitrepomenh timh:");

    return 0;
}


#include<stdio.h>
int main()
{
int x1,x2,i;

printf("Dwse to diastima ta oria einai apo 50 - 127\n");
scanf("%d  %d", &x1,&x2);
printf("To diastima pou edwses einai: %d - %d\n", x1, x2);


for(i=x1; i<=x2; i++){

if(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0)
printf("%d \n",i);

}

return 0;
}
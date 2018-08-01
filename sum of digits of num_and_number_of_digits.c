#include<stdio.h>
#include<conio.h>
void main()
{
int  a,t,sum=0,x,count=0;
printf("enter a number");
scanf("%d",&a);
x=a;
while(a!=0)
{
    t=a%10;
    sum=sum+t;
    a=a/10;
    count++;
}
printf("\n sum of digits of number %d  is =%d and number of digits of taken number are= %d",x,sum,count);
getch();

}

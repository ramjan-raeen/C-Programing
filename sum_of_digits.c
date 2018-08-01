void main()
{
int  a,t,sum=0,x;
printf("enter a number");
scanf("%d",&a);
x=a;
while(a!=0)
{
    t=a%10;
    sum=sum+t;
    a=a/10;
}
printf("\n sum of digits of %d number is=%d",x,sum);
getch();

}

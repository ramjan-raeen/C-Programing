#include<stdio.h>
#include<conio.h>
int hcf(int , int );
void main()
{
    int a,b;
    printf("enter two number");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("H.C.F of number %d and %d is =%d",a,b,hcf(a,b));
    }
    else
        printf("H.C.F of number %d and %d is= %d",a,b,hcf(b,a));
        getch();
}
int hcf(int x, int y)
{
    int c;
    c=x%y;
    if(c==0)
    return y;
    else
    return hcf(y,c);
}

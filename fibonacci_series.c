#include<stdio.h>
main()
{
    int a=0,b=1,c,i,n;
    printf("enter limit of fibonacci series=");
    scanf("%d",&n);
    printf("fibonacci series is=");
    for(i=1;i<n;i++)
    {
        c=a+b;
        b=a;
        a=c;
        printf("%d ",c);
    }
    getch();
}

#include<stdio.h>
main()
{
    int a,b,H;
    printf("enter two number");
    scanf("%d %d",&a,&b);
    for(H=a<b?a:b; H>=1; H--)
    if(a%H==0&&b%H==0)
        break;
    printf("H.C.F of %d and %d is =%d",a,b,H);
    getch();
}

#include<stdio.h>
main()
{
int a,t,r=0;
    printf("enter a number to check number is palindrome or not? ");
    scanf("%d",&a);
    t=a;
    while(t!=0)
    {
        r=r*10;
        r=r+t%10;
        t=t/10;
    }
    if(a==r)
        printf("entered number %d is palindrome",a);
    else
    printf("entered number %d is not palindrome",a);

    getch();
}

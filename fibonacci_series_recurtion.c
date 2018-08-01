long fib(long n)
{
    if(n==1||n==2)
    return 1;
    //else
    return (fib(n-1)+fib(n-2));
}
main()
{
    long n,i;
    printf("enter range of series=");
    scanf("%ld",&n);
    printf("fibonacci series is=");
    for(i=1;i<=n;i++)
    printf("%ld ",fib(i));
    getch();
}

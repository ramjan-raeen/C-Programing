long fact(int n)
{
    if(n>=1)
    return(n*fact(n-1));
    else
    return 1;
}
main()
{
    long n;
    printf("enter a number");
    scanf("%d",&n);
    printf("factorial of %ld is=%ld",n,fact(n));
    getch();
}

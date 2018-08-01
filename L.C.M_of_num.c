main()
{
    int a,b,L;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    for(L=a>b?a:b;L<a*b;L=L+(a>b?a:b))
    {
    if(L%a==0&&L%b==0)
    break;
    }
    printf("L.C.M of entered numbers are=%d",L);
    getch();

}

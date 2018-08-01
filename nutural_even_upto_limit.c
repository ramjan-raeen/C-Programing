main()
{
    int i,limt;
    printf("enter limit");
    scanf("%d",&limt);
    printf("Even natural numbers up to limits are=\n");
    for(i=1;i<=limt;i++)
    {
        if(i==i/2*2)
        printf("%d\n",i);
    }
     getch();
}

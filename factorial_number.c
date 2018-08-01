main()
{
    int i,num,fact=1;
    printf("enter number which you want to find factorial= ");
    scanf("%d!",&num);
    if(num==0)
    {
        printf("\n factorial of entered has always one ");
    }
    else
    {
        while(num>=1)
        {
          fact=fact*num;
          num--;
        }
        printf("factorial is=%d",fact);
    }
    getch();
}

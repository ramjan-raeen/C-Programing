#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num3,i;
    printf("enter a number which you want to find table:\n");
    scanf("%d",&num1);

    for(i=1;i<=10;i++)
    {
        num3=num1*i;
        printf("\n %d * %d = %d",num1,i,num3);
    }
    return 0;
}

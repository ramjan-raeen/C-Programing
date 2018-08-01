#include<stdio.h>
#include<conio.h>
void main(){
    struct Date
    {
        int day;
        int month;
        int year;
    };
    struct details
    {
        char name[50];
        int code;
        int price;
        int qty;
        struct Date mfg;
    };
    struct details items[20];
    int n,i;
    printf("Enter no. of items");
    scanf("%d",&n);
    fflush(stdin);
    for(i=0;i<n;i++)
    {
        fflush(stdin);
        printf("Enter Item Name:");
        scanf("%s",&items[i].name);
        fflush(stdin);
        printf("Enter Item code:");
        scanf("%d",&items[i].code);
        fflush(stdin);
        printf("Enter Quantity of item:");
        scanf("%d",&items[i].qty);
        fflush(stdin);
        printf("Enter price of Item:");
        scanf("%d",&items[i].price);
        fflush(stdin);
        printf("Enter Manufacturing date DD-MM-YY:");
        scanf("%d-%d-%d",&items[i].mfg.day,&items[i].mfg.month,&items[i].mfg.year);
    }
printf("\n*******Inventory************\n");
printf("---------------------------------------------------------------------------\n");
printf("S.No    |Item Name      |Item code:     |Qty:   |price:     |MFG Date:       \n");
    for(i=0;i<n;i++)
    {
        printf("\n%-5d  %5s      %10d      %10d          %d      %1d-%d-%d",i+1,items[i].name,items[i].code,items[i].qty,items[i].price,items[i].mfg.day,items[i].mfg.month,items[i].mfg.year);
    }
    printf("\n---------------------------------------------------------------------------\n");
getch();
}

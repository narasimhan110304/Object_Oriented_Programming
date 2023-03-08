struct FOODCOURT
{
    char cust_name[15];
    int id;
    int balance;
};
struct FOODCOURT cust[10];
void main()
{

    int n;
    printf("Enter no. of customers:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter customer name, voucher id and voucher balance:\n");
        scanf("%s%d%d",cust[i].cust_name,&cust[i].id,&cust[i].balance);
    }
    purchase(n);
    printf("Voucher Balance\n");
    for(int i=0;i<n;i++)
    {
        printf("%s\t%d\t%d\n",cust[i].cust_name,cust[i].id,cust[i].balance);
    }

}
void purchase(int n)
{
    int id,cost,ch;
    printf("Purchase");
    do
    {

        printf("Enter voucher id:\n");
        scanf("%d",&id);
        printf("Enter product cost:\n");
        scanf("%d",&cost);
        for(int i=0;i<n;i++)
        {
            if(cust[i].id==id)
            cust[i].balance-=cost;
        }
        printf("Do you want to continue: Press 1.Yes else press any other key");
        scanf("%d",&ch);
        if(ch==1)
            continue;
        else
            break;
    }while(1);

}

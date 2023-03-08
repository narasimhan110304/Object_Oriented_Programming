#include<stdio.h>

int add(int,int);

void main()
{
    int a,b,total;
    printf("Enter values of a and b");
    scanf("%d%d",&a,&b);

    total=add(a,b);
    printf("Sum is:%d",total);
}

int add(int x,int y)
{
    int sum;

    sum=x+y;;
    return sum;
}

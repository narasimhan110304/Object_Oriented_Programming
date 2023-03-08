#include<stdio.h>

void main()
{
    int n,val;
    printf("Enter the value to find factorial:");
    scanf("%d",&n);
    val=fact(n);
    printf("Factorial is:%d",val);
}

int fact(int a)
{
    int f;
    if(a==1)
        return 1;
    else
        f=a*fact(a-1);
    return f;
}

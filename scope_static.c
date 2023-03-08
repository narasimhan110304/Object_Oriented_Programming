#include<stdio.h>
void count();
void main()
{
    for(int i=0;i<5;i++)
        count();
}
void count()
{
    register int count=0;
    count++;
    printf("Value of count:%d\n",count);
}

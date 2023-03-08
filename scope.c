#include<stdio.h>
void add();
void main()
{
  //  int x,y;
    int x=3,y=5,sum;
    add();
    sum=x+y;
    printf("Sum is:%d\n",sum);
}
void add()
{
    int x=10,y=15,sum;
    sum=x+y;
    printf("Sum is:%d\n",sum);
}

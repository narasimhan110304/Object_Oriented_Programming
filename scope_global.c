#include<stdio.h>
void add();
//int x,y;
void main()
{
    int sum;
   extern int x,y;
    x=3,y=5;
    sum=x+y;
    printf("Sum is:%d\n",sum);
    add();
    sum=x+y;
    printf("Sum is:%d\n",sum);
}
void add()
{
    int sum;
  extern int x,y;
    x=10,y=15;
    sum=x+y;
    printf("Sum is:%d\n",sum);
}

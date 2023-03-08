#include<stdio.h>
void main()
{
    int x=5,y=10;
    printf("Before call x=%d and y=%d\n",x,y);
    add(x,y);
    printf("After call x=%d and y=%d\n",x,y);
}
void add(int a,int b)
{
    printf("Before add(a=a+b) x=%d and y=%d\n",a,b);
    a=a+b;
    printf("After add(a=a+b) x=%d and y=%d\n",a,b);
}

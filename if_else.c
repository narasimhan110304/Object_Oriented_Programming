#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter value of a and b:");
    scanf("%d%d",&a,&b);
   /* if(a>=b)
    {
        c=a+b;
    }
    printf("Value of c:%d",c);*/
    /*if(a>b)
    {
        c=a+b;
    }
    else
    {
        c=a*b;
    }
    printf("Value of c:%d",c);*/
    /*if(a>b)
    {
        c=a+b;
    }
    else if(a<b)
    {
        c=a*b;
    }
    else
    {
        c=a/b;
    }
    printf("Value of c:%d",c);*/
   if (a>b)
    {
        if(a>10)
            a++;
        else
            a--;
        c=a-b;
    }
    else
    {
        c=a+b;
    }
    printf("Value of c:%d",c);
}


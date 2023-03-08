#include<stdio.h>
void main()
{
    float a,b,c;
    char option;
    printf("Calculator-Enter your choice:\nA-Addition\nS-Subtraction\n");
    scanf("%c",&option);
    printf("Enter non-zero value for a and b:\n");
    scanf("%f%f",&a,&b);
    goto add;
   /* else if (option=='s'||option=='S') goto sub;
    else c=0;*/
   c=a-b;
   printf("Value of c:%f",c);
    add:
        c=a+b;
        printf("Value of c:%f",c);
        return;
    sub:
        c=a-b;
        printf("Value of c:%f",c);

}

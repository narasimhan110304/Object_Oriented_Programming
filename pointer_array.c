#include<stdio.h>
float add(float*,int);
void main()
{
    float marks[10],total;
    int n;
    printf("Enter number of subjects:");
    scanf("%d",&n);
    printf("Enter %d subjects marks:\n",n);
    for(int i=0;i<n;i++)
        scanf("%f",&marks[i]);
    total=add(marks,n);
    printf("Total marks:%f",total);
}
float add(float *m,int c)
{
    float sum=0;
    for(int i=0;i<c;i++)
    {
        sum=sum+ *m;
        m++;
    }
    return sum;
}

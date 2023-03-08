#include<stdio.h>

void add(int[][10],int,int);
void main()
{
    int stu[10][10],total;
    int n,s;
    printf("Enter number of students:");
    scanf("%d",&s);
    printf("Enter number of subjects:");
    scanf("%d",&n);
    for(int i=0;i<s;i++)
    {
        printf("Enter marks of student%d:\n",i+1);
        for(int j=0;j<n;j++)
            scanf("%d",&stu[i][j]);
    }
    add(stu,s,n);
    print(stu,s,n);

}
void add(int m[][10],int s,int n)
{
    for(int i=0;i<s;i++)
    {
        m[i][n]=0;
        for(int j=0;j<n;j++)
            m[i][n]+=m[i][j];
    }
}
void print(int m[][10],int s,int n)
{
   for(int i=0;i<s;i++)
    {
        printf("\nMarks of student%d:\n",i+1);
        for(int j=0;j<=n;j++)
            printf("%d\t",m[i][j]);
    }
}

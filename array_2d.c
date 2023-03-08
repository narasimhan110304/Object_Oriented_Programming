#include<stdio.h>
void main()
{
    int a[10][10],i,j,k,row,col,b[10][10],c[10][10];
    printf("Enter no. of rows and columns");
    scanf("%d%d",&row,&col);
  /* printf("Enter the values:\n");
   for(i=0;i<row;i++)
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }*/



    printf("Enter the values of matrix 1:\n");
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    printf("Enter the values of matrix 2:\n");
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
   printf("Sum of matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }



    /*printf("multiply of the matrix=\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            c[i][j]=0;
            for(k=0;k<col;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            //c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }*/
}

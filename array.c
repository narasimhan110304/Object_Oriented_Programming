#include<stdio.h>
void main()
{
   int i, a[]={5,10,15,20,25},b[3],n,total=0,odd=0,even=0;
   //short int b[3];
    //char name[10];
    //n=sizeof(a)/sizeof(int);
  /* for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }*/
   /*for(i=4;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }*/
 printf("Enter number of subjects");
 scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the mark of subject%d:",i+1);
        scanf("%d",&b[i]);
       // total=total+b[i];

    }
     for(i=0;i<n;i++)
    {
       printf("Mark of subject%d:%d\n",i+1,b[i]);
       // scanf("%d",&b[i]);
        //total=total+b[i];

    }
    // printf("Total:%d",total);
}

#include<stdio.h>
#include<stdio.h>
void main()
{
    int i=0,count=0;
    char ch,name[20],name1[20];

    printf("Enter name");
    scanf("%s",name);
    scanf("%s",name1);
  printf("%s%s", name, name1);
   /*while((ch=getchar())!='\n')
    {
        name[i]=ch;
        i++;
    };
 //   printf("Entered name:%s",name);
    i=0;
    while(name[i]!=NULL)
    {
        putchar(name[i]);
        i++;
    }







    /*for(i=0;name[i]!=NULL;i++)
        count++;
    printf("%d",count);*/

}

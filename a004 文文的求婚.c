#include<stdio.h>
int main()
{
    int year;

    while(scanf("%d",&year)!=EOF)
    {
         if (year%400==0)
            printf("�|�~\n");
         else if (year%100==0)
            printf("���~\n");
         else if (year%4==0)
            printf("�|�~\n");
         else
            printf("���~\n");
    }
    return 0;
}

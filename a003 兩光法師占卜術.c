#include<stdio.h>
int main()
{
    int M,D;
    int A;

    while(scanf("%d%d",&M,&D)!=EOF)
    {
         A=0;
         A=(M*2+D)%3;

         if(A==0)
            printf("´¶³q\n");
         else if(A==1)
            printf("¦N\n");
         else if(A==2)
            printf("¤j¦N\n");
    }
    return 0;
}

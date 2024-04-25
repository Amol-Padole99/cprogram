#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter a no of rows:");
    scanf("%d",&n);
    printf("Enter a no of columns:");
    scanf("%d",&m);
    for (int  i = 1; i <=n; i++)
    { for(int j=1; j<=m; j++)
    {  if (m ==1 || m==6 && n==1 ||n==4)
    {
       printf("*");
    }else 
    {
        printf(" ");
    }
    }
    printf("\n");
    }
    return 0;
}
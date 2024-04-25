#include<stdio.h>
int main()
{
    int n,m;
    printf("enter number of rows:");
    scanf("%d",&n);
    printf("enter number of colums:");
    scanf("%d",&m);
    for ( int i =1; i<=n; i++)
    //outer loop always no of lines
    {
        for (int  i =1; i<=m; i++)
        //iner loop always no of each line
    {
        printf("*");
    }
       printf("\n");
    }
    return 0;

}

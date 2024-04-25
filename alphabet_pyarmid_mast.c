#include<stdio.h>
int main()
{
    int n;
    printf("Enter no.of lines:");
    scanf("%d", &n);
    int nst = n;
    int nsp = 1;
    for (int i = 1; i <=n*2+1; i++)
    {   char ch=64;
    char ch = (char)(64+1);
       printf("%c",ch);
       ch++;
    }
    printf("\n");
    for (int  i = 1; i <=n; i++)
    { char ch=64;
       for (int  j = 1; j <=nst; j++)
       { char ch= (char)(64+1);
        printf("%c",ch);
        ch++;
       }for (int  k = 1; k <=nsp; k++)
       {
        printf(" ");
        ch++;
       }for (int j = 1; j <=nst; j++)
       {
        printf("%c",ch);
        ch++;
       }
       nst--;
       nsp+=2;
       printf("\n");
        }
    
    
    return 0;
}
    
   


#include<stdio.h>
int main(){
    int n;
    int min;
    printf("Enter no. of rows:");
    scanf("%d", &n);
    for (int  i = 1; i <=n; i++)
    {
       for (int  j = 1; j <=n; j++)
       { int a = i;
       if(i>n){ a= 2*n -i;}
       int b = j;
       if (b>n)
       { b = 2*n - j;
        }
       
       if (a<b)
       {
        min = a;
       }else{min = b;}
       
       
        printf("%d", min);
       }
        printf("\n");
    }
    
    return 0;
}
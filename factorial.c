#include <stdio.h>
int fact(int);
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Result = %d",fact(n));
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
       return 0;
}

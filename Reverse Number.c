#include <stdio.h>
int main() 
{   
    int n,rev=0,r,i;
    printf("Enter n:");
    scanf("%d",&n);
    i=n;
    while(n!=0)
    {
        r=n%10;
        rev = rev*10+r;
        n=n/10;
    }
    printf("Reverse of given number %d is:%d",i,rev);
    return 0;
}

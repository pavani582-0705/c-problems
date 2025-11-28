#include <stdio.h>
int main() 
{   
    int n,rev=0,pal,r;
    printf("Enter n:");
    scanf("%d",&n);
    pal=n;
    while(n!=0)
    {
        r=n%10;
        rev = rev*10+r;
        n=n/10;
    }
    if(pal==rev)
    {
        printf("%d It is a Paliandrome Number");
    }
    else
    {
        printf("%d It is not a Palindrome Number");
    }
    return 0;
}

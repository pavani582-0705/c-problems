#include <stdio.h>
int main() 
{
    int n, count = 0, i = 2, j, c;
    printf("Enter how many primes: ");
    scanf("%d", &n);
    while (count < n) 
    {
        c = 0;
        
        for (j = 1; j <= i; j++) {
            if (i % j == 0)
                c++;
        }

        if (c == 2) {
            printf("%d ", i);
            count++;
        }

        i++;
    }

    return 0;
}

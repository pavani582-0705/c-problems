#include<stdio.h>
int main()
{
    char c,upper_case,lower_case;
    printf("Enter c:");
    scanf("%c",&c);
    upper_case=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    lower_case=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    if(upper_case||lower_case)
    {
        printf("%c is a vowel",c);
    }
    else if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        printf("%c is a consonant",c);
    }
    else
    {
        printf("%c is not an alphabet",c);
    }
    return 0;
}

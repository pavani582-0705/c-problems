#include <stdio.h>
int main() {
   int num;
   printf("Enter num:");
   scanf("%d",&num);
   if(num%2 == 0)
   {
       printf("%d number is Even Number",num);
   }
      else
   {
       printf("%d number is odd Number",num);
   }
return 0;
}

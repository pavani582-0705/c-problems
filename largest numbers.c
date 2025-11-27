#include <stdio.h>
int main() {
   int num1,num2;
   printf("Enter num1:");
   scanf("%d",&num1);
   printf("Enter num2:");
   scanf("%d",&num2);
   if(num1>num2)
   {
       printf("%d number is Largest Number",num1);
   }
   else if(num2>num1)
   {
       printf("%d is Largest Number",num2);
   }
   else
   {
       printf("Both are equal");
   }
return 0;
}

#include <stdio.h>
int main() 
{
   int i;
   printf("Enter i value:");
   scanf("%d",&i);
   if(i>0)
   {
       printf("%d is Positive Number\n",i);
   }
   else if(i<0)
   {
       printf("%d is Negative Number\n",i);
   }
   else
   {
       printf("Given number is %d\n",i);
   }
   return 0;
}

#include <stdio.h>
int main() 
{
   float area,pi,r;
   pi=3.14;
   printf("Enter radius of a circle:");
   scanf("%f",&r);
   area=pi*r*r;
   printf("Area of a circle:%f",area);
   return 0;
}

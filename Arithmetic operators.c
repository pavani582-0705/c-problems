#include <stdio.h>
int main() {
    int num1,num2,choice;
    printf("Enter num1:");
    scanf("%d",&num1);
    printf("Enter num2:");
    scanf("%d",&num2);
    printf("\n 1.Addition \n 2.Substraction\n 3.Multiplication\n 4.Division\n 5.ModularDivision\n");
    int n = 5,count =0;
    while(count <=n) {
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Addition of %d and %d = %d ",num1,num2,num1+num2,choice);
        break;
        case 2:
        printf("Substraction of %d and %d = %d",num1,num2,num1-num2,choice);
        break;
        case 3:
        printf("Multiplication of %d and %d = %d",num1,num2,num1*num2,choice);
        break;
        case 4:
        printf("Division  of %d and %d = %d",num1,num2,num1/num2,choice);
        break;
        case 5:
        printf("ModularDivision of %d and %d = %d",num1,num2,num1%num2,choice);
        break;
        default :
        break;
    }
    count++;
    printf("\n");
    }
return 0;
}

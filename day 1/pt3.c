#include<stdio.h>
int main()
{
    int num1,num2;
    printf("\n enter first number");
    scanf("%d",&num1);
    printf("\n enter second number");
    scanf("%d",&num2);
    if(num1==num2)
    {
        printf("the entered number's %d,%d are equal",num1,num2);
    }
    else
    {
        printf("the entered number's %d,%d are not equal",num1,num2);
    }
    return 0;
    }


#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
     int isprime;
     for (int i = 2; i <= num / 2; i++)
     {
        is prime=1;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isprime = 0;
                break;
            }
            if(isprime==1){
                printf("%d is a prime number",num);
                }
            }                 
    }
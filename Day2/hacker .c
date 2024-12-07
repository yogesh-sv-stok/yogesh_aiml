#include<stdio.h>
int main()
{
    int num;
    int i=1;
    printf("Enter the number:");
    scanf("%D",&num);
    printf("Even number for1 to %d \n ",num);
    while(i<=num)
    {
        if(i%2==0){
            printf("%d \n",i);     
   }
   i++;
 }
}
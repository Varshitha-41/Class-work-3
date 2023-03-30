#include<stdio.h>

 
bool isEven(int number)
{
    
    return ((number % 2) == 0);
}
 
int main()
{
    int number;
    printf("Enter a Number : ");
    scanf("%d", &number);
 
    if(isEven(number))
    {
        printf("%d is a Even Number\n", number);
    }
    else
    {
        printf("%d is an Odd Number\n", number);
    }
 
    return 0;
}

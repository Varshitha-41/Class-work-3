#include <stdio.h>
#include <math.h>
 
int checkPrimeNumber(int n);
int checkArmstrongNumber(int n);
 
int main()
{
    int num, flag;
 
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    flag = checkPrimeNumber(num);
    if (flag == 1)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    flag = checkArmstrongNumber(num);
    if (flag == 1)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.",num);
    return 0;
}
int checkPrimeNumber(int num)
{
    int i, flag = 1;
 
    for(i=2; i<=num/2; ++i)
    {
        if(num%i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
 
int checkArmstrongNumber(int number)
{
    int originalNumber, remainder, result = 0, num = 0, flag;
 
    originalNumber = number;
 
    while (originalNumber != 0)
    {
        originalNumber /= 10;
        ++num;
    }
 
    originalNumber = number;
 
    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += pow(remainder, num);
        originalNumber /= 10;
    }

    if(result == number)
        flag = 1;
    else
        flag = 0;
 
    return flag;
}

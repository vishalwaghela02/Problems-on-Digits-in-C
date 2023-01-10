#include<stdio.h>

int CheckPrime(int iNo)
{
    int iCnt = 0;
    int iCheck = 0;
                                              
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0)     
        {
            iCheck++;
        }
    }
    return iCheck;
}

int main()
{
    int iValue = 0;
    int iPrime; 
    printf("Enter number: ");
    scanf("%d",&iValue);
    iPrime = CheckPrime(iValue);
    if(iPrime == 2)
    
    {
        printf(" It is a prime number\n");
    }
    else
    {
        printf("It is not  prime number\n");
    }
    return 0;
}
#include<stdio.h>

// Write a program which accept number from user and return the count of odd digits.

int CountEven(int iNo)
{

    int iCount = 0;
    int iOdd = 0;

    while(iNo != 0)
    {
        
        iOdd = iNo % 10;

        if(iOdd % 2 != 0)
        {
            
            iCount++;
        }
        
        iNo = iNo / 10;

    }

    return iCount;

}

int main(void)
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: ");
    scanf("%d", &iValue);

    iRet = CountEven(iValue);

    printf(" Count Of odd Digits: %d", iRet);

    return 0;
}
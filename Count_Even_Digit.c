#include<stdio.h>

// Write a program which accept number from user and return the count of even digits.

int CountEven(int iNo)
{

    int iCount = 0;
    int iEven = 0;

    while(iNo != 0)
    {
        
        iEven = iNo % 10;

        if(iEven % 2 == 0)
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

    printf(" Count Of Even Digits: %d", iRet);

    return 0;
}
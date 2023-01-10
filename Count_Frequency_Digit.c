#include<stdio.h>

// Write a program which accept number from user and count frequency of such a digits which are less than 6.

int Count(int iNo)
{
    int iFrequency = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iFrequency = iNo % 10;

        if(iFrequency <= 6)
        {
            iCount = iCount+1;

        }

        iNo = iNo / 10;

    }

    return iCount;
}

int main(void)
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Count(iValue);

    printf("%d", iRet);

    return 0;
}
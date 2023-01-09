#include<stdio.h>

// Write a program which accept number from user and count frequency of 2 in it.

int CountTwo(int iNo)
{
    int iFrequency = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iFrequency = iNo % 10;
        

        if(iFrequency == 2)
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

    printf("Enter the number: ");
    scanf("%d", &iValue);

    iRet = CountTwo(iValue);

    printf("Two occurs %d times", iRet);

    return 0;
}
#include<stdio.h>

// write a program which accept number from user and return summation of all its non factors.

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;

}

int main(void)
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter number \t");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("Summation is %d", iRet);


    return 0;
}
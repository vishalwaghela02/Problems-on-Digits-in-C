#include<stdio.h>

// write a program which accept number from user and display its multiplication of factors.

int MultFact(int iNo)
{
    int i = 0;
    int iMult = 1;
    for(i = 1; i < iNo; i++)
    {
        if(iNo % i == 0)
        {
            iMult = iMult * i;
        }
    }
    return iMult;
}

int main(void)
{

    int iValue = 0;
    int iRet;

    printf("Enetr number \t");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d", iRet);

    return 0;
}
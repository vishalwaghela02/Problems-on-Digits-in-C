#include<stdio.h>

// Write a program which accept number from user and display all its non factors.

void NonFact(int iNo)
{
    int iCnt = 0;

    
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        
        
        if(iNo % iCnt != 0 )
        {
            printf("%d\t", iCnt);
        }
        
    }
}

int main(void)
{
    int iValue = 0;

    printf("Enter number\n");

    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}
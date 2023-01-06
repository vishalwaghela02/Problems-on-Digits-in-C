#include<stdio.h>

// Write a program which accept number from user and display its factors in decreasing order.

void FactRev(int iNo)
{

    int iCnt = 0;

    for(iCnt = iNo-1; iCnt > 0; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
    }

}

int main(void)
{

    int iValue = 0;
    

    printf("Enetr number \t");
    scanf("%d", &iValue);

    FactRev(iValue);

    
    return 0;
}
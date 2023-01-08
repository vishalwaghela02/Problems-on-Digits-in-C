#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckZero(int iNo)
{
    
    int iCheck = 0;

    while(iNo != 0)
    {
        iCheck = iNo % 10;

        if(iCheck == 0)
        {
            return TRUE;
        }

        iNo = iNo / 10;
        
    }

    return FALSE;

}


int main(void)
{

    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number: ");
    scanf("%d", &iValue);

    bRet = CheckZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains zero");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}
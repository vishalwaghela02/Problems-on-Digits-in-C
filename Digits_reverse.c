#include<stdio.h>
// Write a program which accept number from user and display its digits in reverse order.

void DisplayDigit(int iNo)
{

    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);

        iNo = iNo / 10; 
    }


}

int main(void)
{

    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;

}
#include<stdio.h>

int DigitsOfMultiplication(int iNo)
{
    int iMul = 1;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit != 0)   // ignore zero
        {
            iMul = iMul * iDigit;
        }

        iNo = iNo / 10;
    }

    return iMul;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = DigitsOfMultiplication(iValue);
    printf("Multiplication of digits (ignore 0): %d\n" , iRet);

    return 0;
}
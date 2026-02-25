#include<stdio.h>

int CountEven(int iNo)
{
    int iCount = 0;

    while(iNo != 0)
    {
        int iDigit = iNo % 10;
        if((iNo % 2) == 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("Number of Even Number is : %d\n", iRet);

    return 0;
}
#include<stdio.h>

int CountRange(int iNo)
{
    int iCount = 0;

    while(iNo != 0)
    {
        int iDigit = iNo % 10;

        if((iDigit > 3) && (iDigit < 7))
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);
    printf("Count of digits between 3 and 7 : %d\n",iRet);

    return 0;
}
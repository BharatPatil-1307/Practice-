#include<stdio.h>

int CountOdd(int iNo)
{
    int iCount = 0;
    while(iNo != 0)
    {
        int iDigit = iNo % 10;
        if((iNo % 2) == 1)
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

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("Odd Numbers Count is : %d\n",iRet);

    return 0;
}
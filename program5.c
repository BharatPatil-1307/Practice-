#include<stdio.h>

int SummationOfDifference(int iNo)
{
    int Odd = 0, Even = 0;;
    while(iNo != 0)
    {
        int iDigit = iNo % 10;
        if(iDigit % 2 == 0)
            Even += iDigit;
        else
            Odd += iDigit;
        iNo = iNo / 10;
    }
    printf("(%d - %d)\n", Even , Odd);
    return (Even - Odd);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    iRet = SummationOfDifference(iValue);

    printf("Sumaation of Difference of Even Or Odd number : %d\n",iRet);
    

    return 0;
}
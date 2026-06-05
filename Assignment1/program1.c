#include<stdio.h>

int Divide(int iN1, int iNo2)
{
    int iAns = 0;
    if(iNo2 == 0)
    {
        printf("Unable to divide by zero\n");
        return -1;
    }
    iAns = iN1 / iNo2;
    return iAns;
}
int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iResult = 0;

    iResult = Divide(iValue1, iValue2);
    printf("Division is : %d\n", iResult);
}
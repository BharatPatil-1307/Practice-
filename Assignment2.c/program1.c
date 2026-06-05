#include<stdio.h>

void Star(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        printf("Inside updater\n");
        iNo = -iNo;
    }

    while(iCnt < iNo)   // icnt = 1,
    {
        printf("*\t");
        iCnt++;
    }


    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);
    Star(iValue);

    return 0;
}
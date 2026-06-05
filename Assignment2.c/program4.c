#include<stdio.h>

void Display(int iNo1 , int iNo2)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo1; iCnt++)
    {
        printf("%d\t",iNo1);
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the first number :\n");
    scanf("%d",&iValue1);

    printf("Enter the second number :\n");
    scanf("%d",&iValue2);

    Display(iValue1 , iValue2);

    return 0;
}
#include<stdio.h>

void Star(int iNo)
{
    if(iNo < 0)     // negative numbers handel
    {
        iNo = -iNo;
    }

    for(int i = 1; i <= iNo; i++)
    {
        printf("*\t");
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    
    printf("Enter the number :");
    scanf("%d",&iValue);
    Star(iValue);

    return 0;
}
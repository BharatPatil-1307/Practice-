#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }

    return FALSE;
}
int main()
{   
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number :");
    scanf("%d",&iValue);

    bRet = Check(iValue);
    if(bRet == TRUE)
    {
        printf("%d Divisible by 5\n",iValue);
    }
    else
    {
        printf("%d Not Divisible by 5\n",iValue);
    }

    return 0;
}
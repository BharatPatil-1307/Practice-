#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckWether(int iNo)
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number check wether even or odd :");
    scanf("%d",&iValue);

    bRet = CheckWether(iValue);
    if(bRet == TRUE)
    {
        printf("%d nunber is even\n",iValue);
    }
    else
    {
        printf("%d number is odd\n",iValue);
    }

}
#include<stdio.h>

void Pattern(int iNo)
{
    char ch = 'A';
    for(int i = 0; i < iNo; i++ , ch++)
    {
        printf("%c\t",ch);
    }
    printf("\n");
}

int main()
{   
    int iValue = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
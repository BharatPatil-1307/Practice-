#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    char ch1 = 'A';
    char ch2 = 'a';
    
    for(int i = 1; i <= iRow; i++,ch1++)
    {
        for(int j = 1 , ch1 = 'A' , ch = 'a'; j <= iCol; j++ , ch1++)
        {
            if(i % 2 == 0)
            {
                printf("%c\t",ch2);
            }
            else
            {
                printf("%c\t",ch1);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter the Row :");
    scanf("%d",&iValue1);
    printf("Enter the Colum :");
    scanf("%d",&iValue2);

    Pattern(iValue1 , iValue2);

    return 0;
}
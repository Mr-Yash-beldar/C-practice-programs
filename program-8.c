#include <stdio.h>
void main()
{
    int num1, num2, num3;
    printf(" Input the values of three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("1st Number = %d,\t 2nd Number = %d,\t 3rd Number = %d\n", num1, num2, num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf(" The 1st Number is the greatest among three.");
        }
        else
        {
            printf(" The 3rd Number is the greatest among three.");
        }
    }
    else if (num2 > num3)
    {
        printf(" The 2nd Number is the greatest among three \n");
    }
    else
    {
        printf(" The 3rd Number is the greatest among three \n");
    }
}

#include <stdio.h>

void main()
{
    int num;
    int factorial = 1;

    printf("Enter a  integer value: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("this is not factorial number.\n");
    }
    else
    {

        for (int i = 1; i <= num; i++)
        {
            factorial *= i;
        }

        printf("Factorial of %d is %d\n", num, factorial);
    }
}

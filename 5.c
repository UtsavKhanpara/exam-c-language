#include <stdio.h>


void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;       
    *b = c;     
}

int main()
{
    int n1, n2;

    printf("enter first value :");
    scanf("%d",&n1);
    
    printf("enter second value :");
    scanf("%d",&n2);

    printf("Before swapping: num1 = %d, num2 = %d\n", n1, n2);

    swap(&n1, &n2);

    printf("After swapping: num1 = %d, num2 = %d\n", n1, n2);

    return 0;
}

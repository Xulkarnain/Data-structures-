#include <stdio.h>

int fact(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return fact(n-1)*n;
    }
}

int main()
{
    int x;

    printf("Enter the number: ");
    scanf("%d", &x);

    printf("The factorial of %d is %d", x, fact(x));

    return 0;
}
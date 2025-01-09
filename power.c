#include <stdio.h>

int power(int n, int x)
{
    if (x==0)
    {
        return 1;
    }
    else
    {
        return power(n*n, x-1)*n;
    }
    
}

int main()
{
    int n, x;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Enter the power: ");
    scanf("%d", &x);

    printf("%d raised to the power %d is %d", n, x, power(n, x));

    return 0;
}
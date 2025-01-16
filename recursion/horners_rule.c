#include <stdio.h>

double e(int x , int n)
{
    static int s=1;

    if (n==0)
    {
        return 1;
    }
    else
    {
        s=1+x*s/n;
    }
    return e(x, n-1);
}

int main()
{
    int x, n;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("The value of e^%d is %f", x, e(x, n));

    return 0;
}
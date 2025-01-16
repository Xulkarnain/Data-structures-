#include <stdio.h>

double e(int x , int n)
{
    static int p = 1, f = 1;
    int r;

    if (n==0)
    {
        return 1;
    }
    else
    {
        r = e(x, n-1);
        p = p*x;
        f = f*n;
        return r + p/f;
    }
}

int main()
{
    int x, n;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("The value of e^%d is %lf", x, e(x, n));

    return 0;
}
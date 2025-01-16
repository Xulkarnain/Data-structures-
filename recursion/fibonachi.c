#include <stdio.h>

//iterative method

/*
int fib(int n)
{
    int a = 0, b = 1, c, i;
    if (n == 0)
        return a;
    for (i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

//time complexity O(n)

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series of %d terms is: ", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }
    return 0;
}
*/
//recursive method

/*
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}   

//time complexity O(2^n)

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series of %d terms is: ", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }
    return 0;
}
*/
//note: recursive method is not efficient for large values of n

// efficient method

int f[10];

int fib(int n)
{
    if (n <= 1)
    {
        f[n] = n;
        return n;
    }
    else
    {
        if (f[n - 2] == -1)
            f[n - 2] = fib(n - 2);
        if (f[n - 1] == -1)
            f[n - 1] = fib(n - 1);
        return f[n - 2] + f[n - 1];
    }
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        f[i] = -1;
    }
    printf("Fibonacci series of %d terms is: ", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }
    return 0;
}
#include <stdio.h>

// void fun(int n)
// {
//     if (n > 0)
//     {
//         printf("%d ", n);
//         fun(n - 1);
//     }
// }

// void main()
// {
//     int x = 3;
//     fun(x);
// }

void fun1(int n)
{
    if (n > 0)
    {
        fun1(n - 1);
        printf("%d ", n);
    }
}

void main()
{
    int x = 3;
    fun1(x);
}
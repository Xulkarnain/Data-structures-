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

// void fun1(int n)
// {
//     if (n > 0)
//     {
//         fun1(n - 1);
//         printf("%d ", n);
//     }
// }

// void main()
// {
//     int x = 3;
//     fun1(x);
// }

//Static variable in recursion

// int fun(int n)
// {
//     static int x = 0;
//     if (n > 0)
//     {
//         x++;
//         return fun(n - 1) + x;
//     }
//     return 0;
// }

// int main()
// {
//     int r;
//     r = fun(5);
//     printf("%d\n", r);
//     r = fun(5);
//     printf("%d\n", r);
//     return 0;
// }

//Global variable and staic variable acts same in recursive function...

// tail recursion : recursive call is the last statement in the function

void fun(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        fun(n - 1);
    }
}

void main()
{
    int x = 3;
    fun(x);
}


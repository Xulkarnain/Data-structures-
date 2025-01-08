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

// head recursion : recursive call is the first statement in the function

// void fun(int n)  //head recursion    
// {    
//     if(n>0)
//     {
//         fun(n-1);
//         printf("%d ",n);
//     }
// }

// void main()
// {
//     int x=3;
//     fun(x);
// }


// tree recursion : a function calling itself more than one time

// void fun(int n)
// {
//     if(n>0)
//     {
//         printf("%d ",n);
//         fun(n-1);
//         fun(n-1);
//     }
// }

// void main()
// {
//     int x=3;
//     fun(x);
// }

// indirect recursion : function calling another function and that function calling the first function

// void fun1(int n);
// void fun2(int n);

//  void fun2(int n)
// {
//     if(n>0)
//     {
//         printf("%d ",n);
//         fun1(n-1);
//     }
// }

// void fun1(int n)
// {
//     if(n>1)
//     {
//         printf("%d ",n);
//         fun2(n/2);
//     }
// }

// void main()
// {
//     int x=20;
//     fun2(x);
// }

// nested recursion : recursive function calling itself with the parameter as recursive call

 int fun(int n)
{
    if(n>100)
        return n-10;
    return fun(fun(n+11));
}

int main()
{
    int r;
    r=fun(95);
    printf("%d\n",r);
    return 0;
}
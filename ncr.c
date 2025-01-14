#include <stdio.h>

//simple method 
/*
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return fact(n - 1) * n;
}
int c(int n , int r)
{
   int a,b,c;

   a= fact (a);
   b= fact (b);
   c=fact (a-b);
   
   return a/(b*c);
}

//time complexity O(n)

int main()
{
    int n,r;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);
    printf("The value of nCr is: %d", c(n,r));
    return 0;
}
*/
//note: this is a simple method to calculate nCr

// recursive method

int c(int n, int r)
{
    if (r == 0 || r == n)
    {
        return 1;
    }
    return c(n - 1, r - 1) + c(n - 1, r);
}

//time complexity O(2^n)    

int main()
{
    int n, r;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);
    printf("The value of nCr is: %d", c(n, r));
    return 0;
}
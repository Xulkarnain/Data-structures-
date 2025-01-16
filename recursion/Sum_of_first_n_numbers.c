#include <stdio.h>

int sum(int n)
{
   if (n==0)
   
    return 0;
   
   else
     return sum(n-1)+n;
   
}

int main()
{
    int x;

    printf("Enter the number: ");
    scanf("%d", &x);

    printf("The sum of first %d natural numbers is %d", x, sum(x));

    return 0;
}
#include <stdio.h>

int sum(int n)
{
    int i=0,m=0;
    if (i<=n)
    {
        i++;
        m=sum(n+1);
    }
    
}

int main()
{
    int x;

    printf("Enter the number: ");
    scanf("%d", &x);

    printf("The sum of first %d natural numbers is %d", x, sum(x));

    return 0;
}
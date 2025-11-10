#include <stdio.h>
int sum(int n);
int main() {
    int n;
    scanf("%d", &n);
    printf("Sum of first %d natural numbers is=%d", n,sum(n));
    return 0;
}

int sum(int n)
{
    if (n != 0)
        return (n+sum(n-1));
    else
        return (0);
}

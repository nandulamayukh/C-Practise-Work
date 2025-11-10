#include <stdio.h>
int pow(int n1, int n2);
int main() {
    int x, a, res;
    scanf("%d", &x);
    printf("to the power of: ");
    scanf("%d", &a);
    res=pow(x, a);
    printf("%d^%d=%d",x, a, res);
    return 0;
}

int pow(int x, int a)
{
    if (a != 0)
        return (x*pow(x, a-1));
    else
        return (1);
}

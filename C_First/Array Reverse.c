#include <stdio.h>

int main()
{

int ar[5] = {1, 2, 3, 4, 5};
int i;

printf("array 1: \n");
    for (i=0; i<=4;i++)
     {
        printf("%d ", ar[i]);
     }

printf("array in reverse order: \n");

    for (i=4; i>=0;i--)
    {
        printf("%d ", ar[i]);
    }

}

#include<stdio.h>
main()
{
int i;
int n;
printf("give any integer");
scanf("%d", &n);
i=0;
do
    {
    printf("cube of %d is %d\n", i, i*i*i);
    i=i+1;
    }
    while(i<=n);
}

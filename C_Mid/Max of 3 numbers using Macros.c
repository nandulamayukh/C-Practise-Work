#include<stdio.h>
#define MAX3(a,b,c) a>b&&a>c?a:b>a&&b>c?b:c
main()
{
printf("%d", MAX3(100,30,5));
}

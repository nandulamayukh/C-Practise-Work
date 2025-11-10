#include<stdio.h>
main()
{int a=10;
int *p=&a;
int **q=&p;
printf("%d %d %d %u %u %u %u",*p,**q,a,*q,&p,&a,p);
}

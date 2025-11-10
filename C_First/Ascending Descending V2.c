#include<stdio.h>
void Ascdesc(int *p, int *q, int *s, int *max, int *min, int *mid)
{
    if(*p>*q&& *p>*s)
  *max=*p;
else if(*q>*s)
    *max=*q;
else
*max=*s;
if(*p<*q&& *p<*s)
  *min=*p;
else if(*q<*s)
    *min=*q;
else
*min=*s;
*mid=*p+*q+*s-(*max+*min);

}
main()
{
int a,b,c,max=0,min=0,mid=0;
scanf("%d %d %d",&a,&b, &c);
Ascdesc(&a, &b, &c, &max,&min, &mid);
printf("descending order %d %d %d\n:",max,mid,min);
printf("ascending order %d %d %d\n:",min,mid,max);

}

#include <stdio.h>
int a;
int res;
int sq (int a)
{
res=a*a;
return(res);
}
main()
{
printf("Type in any Integer\n");
scanf("%d", &a);
res=sq(a);
printf ("Square of %d is %d", a, res);
}

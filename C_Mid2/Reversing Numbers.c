#include<stdio.h>
int rev(int a)
{
if (a==0)
return ();
else
{
return((rev(a)%10)*10+rev(a/10));
}
}
main()
{
int r;
int a;
int sum=0;
scanf("%d", &a);

{
printf("%d", rev(sum));
}

}

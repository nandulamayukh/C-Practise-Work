#include <stdio.h>
#include <math.h>
main()
{
int a;
int b;
int c;

scanf("%d %d %d", &a,&b,&c);
if(a+b+c==180)
{
    if(a<90&&b<90&&c<90)
    printf("Triangle is acute");
    else if(a>90||b>90||c>90)
    printf("Triangle is Obtuse");
    else
    printf("Traingle is right");

}
else
printf("not a triangl");
}

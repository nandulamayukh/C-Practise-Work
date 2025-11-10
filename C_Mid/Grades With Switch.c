#include <stdio.h>
#include <math.h>
main()
{
char g;
scanf("%c", &g);
switch(g)
{
case 'E':printf("Excellent");
break;
case 'V':printf("Very Good");
break;
case 'G':printf("Good");
break;
case 'A':printf("Average");
break;
case 'F':printf("Fail");
break;
default:printf("Type in a Valid Grade");
}
}


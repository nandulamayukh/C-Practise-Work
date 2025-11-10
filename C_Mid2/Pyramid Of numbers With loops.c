#include <stdio.h>
main()
{
   int i,j,s,n,k,l=1;
   printf("number of rows : ");
   scanf("%d",&n);
   s=n+4-1;
   for(i=1;i<=n;i++)
   {
         for(k=s;k>=1;k--)
            {
              printf(" ");
            }
	   for(j=1;j<=i;j++)
	   printf("*",l++);
	printf("\n");
	s--;
   }
}

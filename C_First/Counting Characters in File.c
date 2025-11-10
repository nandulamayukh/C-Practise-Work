#include <stdio.h>
main()
{
FILE *fp;
FILE *hp;
int n[100];
int i=0;
int j=0;
int z=0;
int r=0;
int s=0;
char c;
fp=fopen("Print This1.txt", "r");
while(!feof(fp))
{
c=fgetc(fp);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
    i++;
    }
else if ((c>65&&c<90)||(c>97&&c<122))
    {
    j++;
    }
else if(c>48&&c<57)
    {
    z++;
    }
else if(c==' '||c=='\t'||c=='\n')
    {
    r++;
    }
else
    {
    s++;
    }
}
printf("vowels:%d\nconsonants:%d\nnumbers:%d\nspaces and tabs:%d\nspecial characters:%d\n", i,j,z,r,s);
}

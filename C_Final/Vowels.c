
#include <stdio.h>
#include <math.h>
main()
{
char a;
int char_no;
printf("\nType in a character\t");
scanf("%c",&a);
char_no=a;
if((char_no>=65 && char_no<=90)||(char_no>=97 && char_no<=122))
    {
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
            {
                printf("Character is a vowel");
            }
        else
            {
                printf("Character is a consonant");
            }
    }
else
    {
        printf("Input is not valid");

    }
getch();
}


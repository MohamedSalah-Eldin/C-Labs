#include <stdio.h>
#include <stdlib.h>


void revstr(char *revstr)
{
    int i, len;
    len = strlen(revstr);

    for(int i =len;i>=0;i--)
    {
        printf("%c",revstr[i]);
    }

}
int main()
{
    char str[100];

    printf (" Enter the string: ");
    gets(str);

    printf (" \n Before reversing the string: %s ", str);

    printf(" \n After reversing the string: ");
    revstr(str);
}

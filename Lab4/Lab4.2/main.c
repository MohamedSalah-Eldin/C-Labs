#include <stdio.h>
#include <stdlib.h>


void concat(char *str1,char *str2)
{
        printf("%s %s",str1,str2);
}

int main()
{
    char str1[100];
    char str2[100];

    printf (" Enter the first string: ");
    gets(str1);

     printf (" Enter the second string: ");
    gets(str2);

    concat(str1 ,str2);
}

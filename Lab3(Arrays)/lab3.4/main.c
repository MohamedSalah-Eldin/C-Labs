#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size =5;
    char s[size];
    int i;

     printf("Enter your string (Geeks) \n");
     for(i=0;i<size;i++)
        scanf("%c" ,&s[i]);

        printf("\n string before reverse \n");
        for ( i = 0; i < size; i++)
        printf("%c",s[i]);

        printf("\n string after reverse \n");
            for ( i = size-1; i >= 0; i--)
        printf("%c",s[i]);

            return 0;
}

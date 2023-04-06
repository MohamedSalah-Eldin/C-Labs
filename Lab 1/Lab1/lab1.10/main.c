#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    printf("Enter a character: \n");
    scanf("%c", &x);
    if ((x >= 97 && x <= 122) || (x >= 65 && x <= 90))
        printf("%c is an alphabet", x);
    else
        printf("%c is not an alphabet", x);
    return 0;
}

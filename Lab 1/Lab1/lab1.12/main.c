#include <stdio.h>
#include <stdlib.h>

int main()
{
        for(int i=1;i<=10;i++)
        {
        printf("\nGroup of table %d\n",i);
        for(int j=1;j<=10;j++)
        printf("%d*%d=%d\n",j,i,i*j);
        }
        return 0;
}

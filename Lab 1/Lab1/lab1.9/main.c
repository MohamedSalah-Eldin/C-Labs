#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,multi;
      printf("Enter table number\n");
        scanf("%d",&x);

        for(int i=1;i<=12;i++)
        {
            multi=i*x;
            printf("%d*%d=%d\n",i,x,multi);
        }

}


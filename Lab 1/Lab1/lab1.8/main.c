#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,y,z;
  printf("Enter three numbers\n");
   scanf("%d",&x);
   scanf("%d",&y);
   scanf("%d",&z);

   if(x==y&&x==z)
    printf("all numbers equel\n");
   else if(x>y && x>z)
    printf("%d is the largest\n",x);
   else if (y>x && y>z)
    printf("%d is the largest\n",y);
   else
    printf("%d is the largest\n",z);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
  int r,x,y;
  float q;
  printf("Enter two numbers\n");
  scanf("%d",&x);
    scanf("%d",&y);
    if(y==0)
        printf("can't divide 0\n");
    else
    {
  q=x/y;
  r=x%y;
    printf("Quotient = %f \n",q);
        printf("Remainder = %d \n",r);}

return 0;
}

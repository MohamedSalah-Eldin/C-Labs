#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,sum;
   do{
    printf("Enter number:\n");
    scanf("%d",&x);
    sum=sum+x;
   }
   while(sum<=100);
        printf("You have exceed 100 with value of %d\n",sum);
        return 0;
}

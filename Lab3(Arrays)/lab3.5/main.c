#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int count=0;
    int max_count=0;
int arr[16]={1,2,2,3,3,3,3,4,4,4,4,3,3,3,3,3};
            printf("Enter num\n");
scanf("%d",&num);
  for (int i =0;i<16;i++)
   {
       if (arr[i]==num)
                count++;
                else
                    {
                        if (count>max_count)
                        max_count = count;
                                            count =0;

                    }
   }
   if(count > max_count)
            {
                max_count = count;
            }
            printf("resualt is %d",max_count);
return 0;
}

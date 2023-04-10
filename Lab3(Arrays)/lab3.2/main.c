#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max,min,i,x;
    int size=5;
    int arr[size];

  printf("Enter five numbers \n");
     for(x=0;x<size;x++)
        scanf("%d" ,&arr[x]);

min=arr[0];
max=arr[0];

for(i=0;i<size;i++)
    if (min>arr[i])
    min=arr[i];

for(i=0;i<size;i++)
    if (max<arr[i])
    max=arr[i];

printf("min number is %d\n",min);
printf("max number is %d\n",max);

    return 0;
}

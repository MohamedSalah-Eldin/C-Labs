#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i;
    int size =5;
    int arr[size];
    printf("Enter five numbers \n");
     for(x=0;x<size;x++)
        scanf("%d" ,&arr[x]);
          for ( i = 0; i < size; i++)
        printf("%d\t",arr[i]);
            return 0;

}

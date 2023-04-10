#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i,j,largest,temp;
 int size=5;
 int arr[size];

  printf("Enter five numbers \n");
     for(i=0;i<size;i++)
        scanf("%d" ,&arr[i]);

    printf("Your array elements before sorting are:\n");
for ( i = 0; i < size; i++)
        printf("%d\t",arr[i]);

    for(int i = 0; i < size - 1; i++)
    {
        largest = i;
        for( j = i + 1; j < size; j++)
        {
            if(arr[j] > arr[largest])
                largest = j;
        }
        temp=arr[i];
        arr[i]=arr[largest];
        arr[largest]=temp;
    }

    printf("\nYour array elements after sorting are:\n");
for ( i = 0; i < size; i++)
        printf("%d\t",arr[i]);

    printf("\nsecond largest number is %d\n",arr[1]);

        return 0;
}

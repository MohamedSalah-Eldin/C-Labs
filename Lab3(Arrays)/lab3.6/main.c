#include <stdio.h>
#include <stdlib.h>

/*------------------------------------------------Selection Sort-------------------------------------------------------*/

void SelectionSort(int arr[], int size)
{
    int temp;
    for(int i = 0; i < size - 1; i++)
    {
        int min = i;
        for(int j = i + 1; j < size; j++)
        {
            if(arr[j] < arr[min])
                min = j;
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
void BubbleSort(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size-1 ; i++)
        for (j = 0; j < size - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        }
}
int main()
{
    int x;
    int y=0;
    int size = 5;
    int arr[size];
    printf("Enter five numbers to be sorted\n");
    for(x=0;x<size;x++)
        scanf("%d" ,&arr[x]);
    SelectionSort(arr, size);
   printf("The Sorted Array by using Selection Sort is : \n");
    for(int i = 0; i < size; i++)
      {printf("%d\t",arr[i]) ;}
        BubbleSort(arr, size);
   printf("\nThe Sorted Array by using Bubble Sort is : \n");
       for (int i = 0; i < size; i++)
        printf("%d\t",arr[i]);
    return 0;}



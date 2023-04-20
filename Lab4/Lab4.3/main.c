#include <stdio.h>
#include <stdlib.h>

/*
//method 1
void swap(int a,int b)
{
   a=a+b;
   b=a-b;
   a=a-b;
printf("After swap x=%d y=%d\n",a,b);

}
int main()
{
    int x,y;
    printf("Enter two numbers\n");
    scanf("%d",&x);
    scanf("%d",&y);
printf("\Before swap x=%d y=%d\n",x,y);

    swap(x,y);

    return 0;
}*/

///////////////////////////////////////////////////////////////////////////


//method 2
/*
void swap(int a[],int b)
{
  for(int i=b-1;i>=0;i--)
    printf("%d\t",a[i]);
}
int main()
{
    int x[2];
    printf("Enter two numbers\n");
   for(int i=0;i<2;i++)
   {
       scanf("%d",&x[i]);
   }
printf("Before swap %d %d\n",x[0],x[1]);

    printf("After swap\n");
    swap(x,2);

    return 0;
}
*/

///////////////////////////////////////////////////////////////////////////////////////


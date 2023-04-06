#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

COORD coord={0,0};
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }
int main()
{
 int row,col,value,num;
 row=1;
 value=1;

  printf("please enter odd number:");
  scanf("%d",&num);

 col=(num+1) /2;


 do{
    gotoxy(col*6,row*4);
    printf("%d",value);
    if(value%num==0)
    row++;
    else{
    row--;
    col--;
        }
    if(row==0)
        row =num;
    if(col==0)
        col =num;
    value++;

 }
 while(value <= num*num);
 return 0;
}

// to print the below pyramid
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
#include<stdio.h>
#include<conio.h>
void main()
{int x,y;clrscr();
 for(x=1;x<=5;x=x+1)
 {for(y=1;y<=x;y=y+1)
  printf("%d  ",y);
  printf("\n");
 }
 getch();
}
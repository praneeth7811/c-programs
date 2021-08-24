// to print the below pyramid
// *
// * *
// * * *
// * * * *
// * * * * *
#include<stdio.h>
#include<conio.h>
void main()
{int x,y;clrscr();
 for(x=1;x<=5;x=x+1)
 {for(y=1;y<=x;y=y+1)
  printf("*  ",y);
  printf("\n");
 }
 getch();
}
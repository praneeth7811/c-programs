// to print ascii codes and their charecters
#include<stdio.h>
#include<conio.h>
void main()
{char i;clrscr();
 for(i=0;i<255;i=i+1)
  printf("ascii code of %d= %c ",i,i);
 getch();
}
// to print the below pyramid
//          1
//        1 2 1
//      1 2 3 2 1
//    1 2 3 4 3 2 1
//  1 2 3 4 5 4 3 2 1
#include<stdio.h>
#include<conio.h>
void main()
{int x,y,t;clrscr();
 for(x=1;x<=5;x=x+1)
 {for(t=1;t<=5-x;t=t+1) printf("  ");
  for(y=1;y<=x;y=y+1)   printf("%d ",y);
  for(y=y-2;y>=1;y=y-1) printf("%d ",y);
  printf("\n");
 }
 getch();
}
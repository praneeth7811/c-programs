// to find smallest of given 10 numbers
#include<stdio.h>
#include<conio.h>
void main()
{int c,x,small;clrscr();
 for(c=1;c<=10;c=c+1)
 {printf("enter a no:");
  scanf("%d",&x);
  if(c==1) small=x;
  else if (x<small) small=x;
 }
 printf("smallest number=%d",small);
 getch();
}
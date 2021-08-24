// to find biggest of given 10 numbers
#include<stdio.h>
#include<conio.h>
void main()
{int c,x,big;clrscr();
 for(c=1;c<=10;c=c+1)
 {printf("enter a no:");
  scanf("%d",&x);
  if(c==1) x=big;
  else if (x>big) big=x;
 }
 printf("biggest number=%d",big);
 getch();
}
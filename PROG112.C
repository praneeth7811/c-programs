// to find smallest of given n numbers
#include<stdio.h>
#include<conio.h>
void main()
{int n,c,x,small;clrscr();
 printf("enter n value");
 scanf("%d",&n);
 for(c=1;c<=n;c=c+1)
 {printf("enter a no:");
  scanf("%d",&x);
  if(c==1) small=x;
  else if (x<small) small=x;
 }
 printf("smallest number=%d",small);
 getch();
}
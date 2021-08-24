// to find biggest of given n numbers
#include<stdio.h>
#include<conio.h>
void main()
{int n,c,x,big;clrscr();
 printf("enter n value");
 scanf("%d",&n);
 for(c=1;c<=n;c=c+1)
 {printf("enter a no:");
  scanf("%d",&x);
  if(c==1) big=x;
  else if (x>big) big=x;
 }
 printf("biggest number=%d",big);
 getch();
}
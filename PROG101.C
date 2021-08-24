// to print the prime numbers upto 100
#include<stdio.h>
#include<conio.h>
void main()
{int x,n;clrscr();
 for(n=1;n<=100;n=n+1)
 {for(x=2;x<=n-1;x=x+1)
  if(n%x==0) break;
  if(n==x) printf("%d\t",n);
 }
 getch();
}


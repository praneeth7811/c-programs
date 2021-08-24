// to print the prime no. upto n1
#include<stdio.h>
#include<conio.h>
void main()
{int n1,x,n;clrscr();
 printf("enter n1 value");
 scanf("%d",&n1);
 for(n=1;n<=n1;n=n+1)
 {for(x=2;x<=n-1;x=x+1)
  if(n%x==0) break;
  if(n==x) printf("%d\t",n);
 }
 getch();
}


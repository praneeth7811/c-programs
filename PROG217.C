//w a c p to implement recursion
/* when we call a function by itself it is known as recursion*/
// factorial of n

#include<stdio.h>
#include<conio.h>
int fact(int n);
void main()
{int n,res;clrscr();
 printf("enter n value");
 scanf("%d",&n);
 res=fact(n);
 printf("result=%d",res);
 getch();
}
int fact(n)
{int res;
 if(n==0)
 {
  res=1;
 }
 else
 {
  res=n*fact(n-1);
 }
 return res;
}
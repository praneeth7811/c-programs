//to print natural numbers from x to y by using for statement
#include<stdio.h>
#include<conio.h>
void main()
{int x,y;clrscr();
 printf("enter x value");
 scanf("%d",&x);
 printf("enter y value");
 scanf("%d",&y);
 if(x==y) printf("enter different numbers");
 else if(x<y)
  {
   for( ;x<=y;x=x+1)
   printf("%d\t",x);
  }
 else
  {
   for( ;x>=y;x=x-1);
   printf("%d\t",x);
  }
 getch();
}
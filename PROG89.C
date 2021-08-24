//to print even numbers from x to y by using for statement
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
   if(x%2!=0) x=x+1;
   for( ;x<=y;x=x+2)
   printf("%d\t",x);
  }
 else
  {
   if(x%2!=0) x=x-1;
   for( ;x>=y;x=x-2);
   printf("%d\t",x);
  }
 getch();
}
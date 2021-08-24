// to read and display 5 numbers by using the user defined functions
// type 3

#include<stdio.h>
#include<conio.h>
void read(int i)
{
 int a[5];
 for(i=0;i<=4;i=i+1)
 {
  printf("enter a no:");
  scanf("%d",&a[i]);
 }
}
void display(int i)
{
 int a[5];
 for(i=0;i<=4;i=i+1)
 {
  printf("%d\t",a[i]);
 }
}
void main()
{int i=0;clrscr();
 read(i);
 display(i);
 getch();
}

/* program stores the address of a variable in a pointer and then prints
   the data using variable value and a pointer. */
#include<stdio.h>
#include<conio.h>
void main()
{int a;int *p;clrscr();
 a=14;
 p=&a;
 printf("%d %d \n",a,&a);
 printf("%d %d \n",*p,a);
 getch();
}

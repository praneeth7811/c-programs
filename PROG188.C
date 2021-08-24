/* w a c p incrementing the value of variable i by 10 using its pointer */

#include<stdio.h>
#include<conio.h>
void main()
{int i=5;int *p;clrscr();
 p=&i;
 printf("the value of i is :%d  \n",*p);
 *p=*p+10;
 printf("the value of i is :%d  \n",*p);
 getch();
}

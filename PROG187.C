/* program to print the size of pointer variable and size of value
   dereferenced by that pointer. */

#include<stdio.h>
#include<conio.h>
void main()
{char a='x',*p1=&a;
 int b=12,*p2=&b;
 float c=12.4,*p3=&c;
 double d =18.3,*p4=&d;clrscr();
 printf("size of (p1)=%d,size of(*p1)=%d\n",sizeof(p1),sizeof(*p1));
 printf("size of (p2)=%d,size of(*p2)=%d\n",sizeof(p2),sizeof(*p2));
 printf("size of (p3)=%d,size of(*p3)=%d\n",sizeof(p3),sizeof(*p3));
 printf("size of (p4)=%d,size of(*p4)=%d\n",sizeof(p4),sizeof(*p4));
 getch();
}



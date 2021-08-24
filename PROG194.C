//untyped pointer
#include<stdio.h>
#include<conio.h>
void main()
{int a=20;double b=3.14159;void *vp;clrscr();
 vp=&a;
 printf("a=%d \n ",*(int *)vp);
 vp=&b;
 printf("b=%lf \n",*(double *)vp);
 getch();
}
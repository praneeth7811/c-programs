// to find the product of any three integers by using the header file head2.h
#include<stdio.h>
#include<conio.h>
#include"HEAD2.h"
void main()
{float a,b,c,d,avg1;clrscr();
 printf("enter any four number");
 scanf("%f%f%f%f",&a,&b,&c,&d);
 avg1=avg(a,b,c,d);
 printf("average=%d",avg1);
 getch();
}

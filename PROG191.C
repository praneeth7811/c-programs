//to implement pointer flexibility
#include<stdio.h>
#include<conio.h>
void main()
{int a;int b;int c;int *p;clrscr();
 printf("enter any 3 no:");
 scanf("%d %d %d",&a,&b,&c);
 p=&a;
 printf("%3d \n",*p);
 p=&b;
 printf("%3d \n",*p);
 p=&c;
 printf("%3d \n",*p);
 getch();
}


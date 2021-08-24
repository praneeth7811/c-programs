  // to find the simple and compound interst by using the header file head3.h

#include<stdio.h>
#include<conio.h>
#include"head3.h"
void main()
{float p,n,r,s,c;clrscr();
 printf("enter p,n,r values");
 scanf("%f%f%f",&p,&n,&r);
 s=simple(p,n,r);
 c=compound(p,n,r);
 printf("simple interst=%f \n compound interst=%f",s,c);
 getch();
}









// to find square and cube values of the given number by usingheaderf file haed1.h

#include<stdio.h>
#include<conio.h>
#include"HEAD1.H"
void main()
{int a,s,c;clrscr();
 printf("enter a number");
 scanf("%d",&a);
 s=square(a,a);
 c=cube(a,a,a);
 printf("sruare value=%d \n cube value=%d",s,c);
 getch();
}
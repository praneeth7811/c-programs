//to find the sum and product of any three numbers using user defined functions
// type 1

#include<stdio.h>
#include<conio.h>
int sum(int x,int y,int z)
{int s;
 s=x+y+z;
 return s;
}
int product(int x,int y,int z)
{int p;
 p=x*y*z;
 return p;
}
void main()
{int a,b,c,g,h;clrscr();
 printf("enter any three numbers");
 scanf("%d%d%d",&a,&b,&c);
 g=sum(a,b,c);
 h=product(a,b,c);
 printf("sum=%d \n product=%d",g,h);
 getch();
}
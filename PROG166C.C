//to find the simple and compound interest using user defined functions
// type 3

#include<stdio.h>
#include<conio.h>
#include<math.h>
void simple(float p,float n,float r)
{
 printf("simple interest=%f",(p*n*r)/100.0);
}
void compound(float p,float n,float r)
{
 printf("compound interest=%f",p*pow(1.0+r/100.0,n));
}
void main()
{float p,n,r;clrscr();
 printf("enter p,n,r values");scanf("%f%f%f",&p,&n,&r);
 simple(p,n,r);
 compound(p,n,r);
 getch();
}

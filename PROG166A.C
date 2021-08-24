//to find the simple and compound interst using user defined functions
// type 1

#include<stdio.h>
#include<conio.h>
#include<math.h>
float simple(float p,float n,float r)
{
 float s;
 s=(p*n*r)/100.0;
 return s;
}
float compound(float p,float n,float r)
{
 float c;
 c=p*pow(1.0+r/100.0,n);
 return c;
}
void main()
{float p,n,r,s,c;clrscr();
 printf("enter p value");scanf("%f",&p);
 printf("enter n value");scanf("%f",&n);
 printf("enter r value");scanf("%f",&r);
 s=simple(p,n,r);
 c=compound(p,n,r);
 printf("simple interst=%f \n compound interst=%f",s,c);
 getch();
}
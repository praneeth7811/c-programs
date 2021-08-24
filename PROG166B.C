//to find the simple and compound interst by using user defined functions
// type 2

#include<stdio.h>
#include<conio.h>
#include<math.h>

 float simple(float p,float n,float r);
 float compound(float p,float n,float r);

void main()
{float p,n,r,s,c;clrscr();
 printf("enter p,n,r values");
 scanf("%f%f%f",&p,&n,&r);
 s=simple(p,n,r);
 c=compound(p,n,r);
 printf("simpe interst=%f \n compound interst=%f",s,c);
 getch();
}
float simple(float p,float n,float r)
{
 return((p*n*r)/100.0);
}
float compound(float p,float n,float r)
{
 return(p*pow(1.0+r/100.0,n));
}
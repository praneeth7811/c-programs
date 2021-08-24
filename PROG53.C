// using slab system

#include<stdio.h>
#include<conio.h>
void main()
{float u,rs;clrscr();
 printf("enter units:");
 scanf("%f",&u);
 if(u<=100)
 {
  rs=u*1.20;
  printf("rupees=%f",rs);
 }
 else if(u>100&&u<=400)  
 {
  rs=u*2.80;
  printf("rupees=%f",rs); 
 }
 else    
 {
  rs=u*6.80;
  printf("rupees=%f",rs);   
 }
 getch();
}


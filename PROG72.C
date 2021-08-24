//to find the given no:. is armstrong or not
#include<stdio.h>
#include<conio.h>
void main()
{int num,temp,sum=0,r;clrscr();
 printf("enter a no:.");
 scanf("%d",&num);
 temp=num;
 while(num!=0)
 {
   r=num%10;
   num=num/10;
   sum=sum+(r*r*r);
 }
 if(sum==temp) printf("%d is armstrong no:",temp);
 else printf("%d is not armstrong no:.",temp);
 getch();
}
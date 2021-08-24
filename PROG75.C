// to count the no.of digits in a no:
#include<stdio.h>
#include<conio.h>
void main()
{int num,c=0;clrscr();
 printf("enter a no:.");
 scanf("%d",&num);
 while(num)
 { num=num/10;
    c=c+1;
 }
 printf("the total no.of digits are: %d",c);
 getch();
}
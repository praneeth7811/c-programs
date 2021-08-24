// to immplement continue statement
#include<stdio.h>
#include<conio.h>
void main()
{int c;clrscr();
 for(c=1;c<=10;c=c+1)
 {if(c==4) continue;
  printf("%d\t",c);
 }
 getch();
}
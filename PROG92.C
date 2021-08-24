// to print natural numbers except upto 100 23,45,67,94
#include<stdio.h>
#include<conio.h>
void main()
{int c;clrscr();
 for(c=1;c<=10;c=c+1)
 {if(c==23||c==45||c==67||c=94) continue;
  printf("%d\t",c);
 }
 getch();
}
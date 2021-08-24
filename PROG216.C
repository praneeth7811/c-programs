// w a c p to implement enum
/* enumerations: it can be used to automatically assign values to the names
     and those values are start from 0  */

#include<stdio.h>
#include<conio.h>
enum months{jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};
void main()
{enum months x;clrscr();
 x=dec;
 printf("the values of x is=%d",x);
 getch();
}
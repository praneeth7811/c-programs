// to print the given string into reverse order
#include<stdio.h>
#include<conio.h>
void main()
{char s[100];clrscr();
 printf("enter a string:");gets(s);
 strrev(s);
 printf("reverse order is:");puts(s);
 getch();
}
//to convert given string from lower case to upper case with out using string function
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{char s[100];int l;clrscr();
 printf("enter a string:");gets(s);
 for(l=0;s[l]!='\0';++l)
  s[l]=tolower(s[l]);
 printf("lower case string is:");puts(s);
 getch();
}
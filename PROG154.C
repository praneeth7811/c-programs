//to convert given string from lower case to upper case by using ascii codes
#include<stdio.h>
#include<conio.h>
void main()
{char s[100];int l;clrscr();
 printf("enter a string:");gets(s);
 for(l=0;s[l]!='\0';++l)
 if(s[l]>=97&&s[l]<=122) s[l]=s[l]-32;
 printf("upper case string is:");puts(s);
 getch();
}
// to print the given string into reverse order without using string function
#include<stdio.h>
#include<conio.h>
void main()
{char s[100],t;int l,l1;clrscr();
 printf("enter a string:");gets(s);
 for(l=0;s[l]!='\0';l=l+1);
 for(l1=0,--l;l1<l;++l1,--l)
 {t=s[l1];
  s[l1]=s[l];
  s[l]=t;
 }
 printf("reverse string is:");puts(s);
 getch();
}
// to find the total no.of charecters in the given string with out using string function
#include<stdio.h>
#include<conio.h>
void main()
{char s[100];int l;clrscr();
 printf("enter a string:");gets(s);
 for(l=0;s[l]!='\0';++l);
 printf("the total no.of charecters are: %d",l);
 getch();
}
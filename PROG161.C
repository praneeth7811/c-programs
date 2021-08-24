//to find the string is palindrome or not
#include<stdio.h>
#include<conio.h>
void main()
{char s[100];int l,l1;clrscr();
 printf("enter a string:");gets(s);
 for(l=0;s[l1]!='\0';++l);
 for(l=0,--l;l1<l;++l1,--l)
 if(s[l1]!=s[l1]) {printf("%s is not palindrome",s);break;}
 if(l1==l) printf("%s is palindrome",s);
 getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{char c;int L,U;clrscr();
 printf("enter an alphabet");
 scanf("%c",&c);
 L=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
 U=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
 if(L||U) printf("%c is vowel",c);
 else printf("%c is not vowel",c);
 getch();
}

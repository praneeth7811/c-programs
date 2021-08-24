//to add two given strings with out using string functions
#include<stdio.h>
#include<conio.h>
void main()
{char s1[100],s2[100],s3[200];int l1,l2,l3;clrscr();
 printf("enter first string:");gets(s1);
 printf("enter second string:");gets(s2);
 for(l1=0;s1[l1]!='\0';++l1);
 for(l2=0;s2[l2]!='\0';++l2);
 for(l3=0;l3<l1;++l3)  s3[l3]=s1[l3];
 for( ;l3<=l1+l2;++l3) s3[l3]=s2[l3-l1];
 printf("total string is:");puts(s3);
 getch();
}
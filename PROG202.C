//w a c p to define an user defined function to reverse a string
#include<stdio.h>
#include<conio.h>
void ustrrev(char x[]);
int ustrlen(char a[]);
void main()
{char s[20];clrscr();
 printf("enter a string: \n");gets(s);
 ustrrev(s);
 printf("reverse string is: %s \n",s);
 getch();
}
void ustrrev(char x[])
{
 int i,j,l;char temp;
 l=ustrlen(x);
 for(i=0,j=l-1;i<l/2;i=i+1,j=j-1)
 {
  temp=x[i];
  x[i]=x[j];
  x[j]=temp;
 }
}
int ustrlen(char a[])
{
 int n=0,i;
 for(i=0;a[i]!='\0';i++)
 {
  n=n+1;
 }
 return n;
}

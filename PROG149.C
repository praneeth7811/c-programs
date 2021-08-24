//to read and display the given address
#include<stdio.h>
#include<conio.h>
void main()
{char n[20],v[15],d[15];long int p;clrscr();
 printf("enter a name");gets(n);
 printf("enter village");gets(v);
 printf("enter district");gets(d);
 printf("enter pincode");scanf("%ld",&p);
 printf("the given address is:   \n");
 printf("name=");puts(n);
 printf("village=");puts(v);
 printf("district=");puts(d);
 printf("pincode=%ld",p);
 getch();
}
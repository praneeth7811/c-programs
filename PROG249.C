//read all members in stream oriented data files
#include<stdio.h>
#include<conio.h>
void main()
{FILE *add;
 char n[20],v[15],d[15];long int p;int c;clrscr();
 add=fopen("address.dat","r");
 while(!feof(add))
 {fscanf(add,"%s%s%s%s%ld\n",n,v,d,p);
 printf("enter name ");puts(n);
  printf("enter village ");puts(v);
  printf("enter district ");puts(d);
  printf("enter pincode = %ld",p);
  }fclose(add);getch();
  }

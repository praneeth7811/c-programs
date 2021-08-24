//add 5 records in stream oriented data files
#include<stdio.h>
#include<conio.h>
void main()
{FILE *add;
 char n[20],v[15],d[15];long int p;int c;clrscr();
 add=fopen("address.dat","a");
 for(c=1;c<=5;c=c+1)
 {printf("enter name ");gets(n);
  printf("enter village ");gets(v);
  printf("enter district ");gets(d);
  printf("enter pincode  ");scanf("%ld",&p);
  fprintf(add,"%s%s%s%s%ld\n",n,v,d,p);
  flushall();
  }fclose(add);getch();
  }

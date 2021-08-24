// read and display 5 numbers by using structures

#include<stdio.h>
#include<conio.h>
void main()
{struct address
 {
  char n[20],v[15],d[15];
  long int p;
 }x[5];int c;clrscr();
 for(c=0;c<=4;c=c+1)
 {
  printf("enter the name:");gets(x[c].n);
  printf("enter the village:");gets(x[c].v);
  printf("enter the district:");gets(x[c].d);
  printf("enter the pincode:");scanf("%ld",&x[c].p);
  flushall();
 }
 printf("the given address are:  \n");
 for(c=0;c<=4;c=c+1)
 {
  printf("name:");puts(x[c].n);
  printf("village:");puts(x[c].v);
  printf("district:");puts(x[c].d);
  printf("pin code:%ld",x[c].p);
 }
 getch();
}






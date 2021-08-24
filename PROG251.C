//read specific members in stream oriented data files
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{FILE *add;
 char n[20],v[15],d[15],sn[20];long int p;int r,c=1;clrscr();
 add=fopen("address.dat","r");
 printf("which record do you want");gets(sn);
 while(!feof(add))
 {fscanf(add,"%s%s%s%s%ld\n",n,v,d,p);
   if(!strcmp(sn,n)){
 printf("enter name ");puts(n);
  printf("enter village ");puts(v);
  printf("enter district ");puts(d);
  printf("enter pincode = %ld",p);
 break; }c=c+1;}fclose(add);getch();
  }

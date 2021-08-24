//read specific members in stream oriented data files
#include<stdio.h>
#include<conio.h>
void main()
{FILE *add;
 char n[20],v[15],d[15];long int p;int r,c=1;clrscr();
 add=fopen("address.dat","r");
 printf("which record do you want");scanf("%d",&r);
 while(!feof(add))
 {fscanf(add,"%s%s%s%s%ld\n",n,v,d,p);
   if(r==c){
 printf("enter name ");puts(n);
  printf("enter village ");puts(v);
  printf("enter district ");puts(d);
  printf("enter pincode = %ld",p);
 break; }c=c+1;}fclose(add);getch();
  }

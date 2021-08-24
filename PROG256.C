//read a specified record from the above system oriented data file
#include<stdio.h>
#include<conio.h>
void main()
{FILE *add;
struct address
{char n[20],v[15],d[15];long int p;}x;int r;clrscr();
printf("which record do you want");scanf("%d",&r);
r=(r-1)*sizeof(x);
add=fopen("radd.dat","r");
fseek(add,r,SEEK_SET);
fread((char *)&x,sizeof(x),1,add);
if(feof(add))
printf("name:");puts(x.n);
printf("village:");puts(x.v);
printf("district:");puts(x.d);
printf("pin code:ld\n",x.p);
fclose(add);
getch();
}

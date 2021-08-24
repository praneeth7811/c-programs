//read all record from the above system oriented data file
#include<stdio.h>
#include<conio.h>
void main()
{FILE *add;
struct address
{char n[20],v[15],d[15];long int p;}x;clrscr();
add=fopen("radd.dat","r");
while(!feof(add))
{fread((char *)&x,sizeof(x),1,add);
printf("name:");puts(x.n);
printf("village:");puts(x.v);
printf("district:");puts(x.d);
printf("pin code:ld\n",x.p);}
fclose(add);
getch();
}

//add five records from the above system oriented data file
#include<stdio.h>
#include<conio.h>
void main()
{FILE *add;
struct address
{char n[20],v[15],d[15];long int p;}x;int c;clrscr();
add=fopen("radd.dat","w");
for(c=1;c<=5;c++)
{
printf("name:");gets(x.n);
printf("village:");gets(x.v);
printf("district:");gets(x.d);
printf("pin code:");scanf("%ld",&x.p);
fwrite((char *)&x,sizeof(x),1,add);}
fclose(add);
getch();
}

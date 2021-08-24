// to arrange the given 10 numbers into descending order by using selection sort technique
#include<stdio.h>
#include<conio.h>
void main()
{int a[10],i,j,t;clrscr();
 for(i=0;i<=9;i=i+1)
 {
  printf("enter a no:");
  scanf("%d",&a[i]);
 }
 for(i=0;i<=8;i=i+1)
 for(j=i+1;j<=9;++j)
 if(a[j]>a[i])
 {t=a[i];
  a[i]=a[j];
  a[j]=t;
 }
 printf("descending order is: \n");
 for(i=0;i<=9;i=i+1)
 printf("%d\t",a[i]);
 getch();
}

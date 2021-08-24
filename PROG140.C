// to arrange the given 10 numbers into ascending order by using bubble sort technique
#include<stdio.h>
#include<conio.h>
void main()
{int a[10],i,j,t;clrscr();
 for(i=0;i<=9;i=i+1)
 {
  printf("enter a no:");
  scanf("%d",&a[i]);
 }
 for(i=1;i<=9;i=i+1)
 for(j=0;j<=9;++j)
 if(a[j+1]<a[j])
 {t=a[j];
  a[j]=a[j+1];
  a[j+1]=t;
 }
 printf("ascending order is: \n");
 for(i=0;i<=9;i=i+1)
 printf("%d\t",a[i]);
 getch();
}

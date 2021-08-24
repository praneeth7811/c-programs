#include<stdio.h>
#include<conio.h>
void main()
{int num,i=1,sum=0;clrscr();
 printf("enter a no:.");
 scanf("%d",&num);
 while(i<=num)
 {if(num%i==0) sum=sum+i;
   i=i+1;
 }
 if(sum==num) printf("%d is not a perrfect no",i);
  else printf("%d is not a perfect no",i);
 getch();
}

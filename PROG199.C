//w a c p to find the maximum value in an array

#include<stdio.h>
#include<conio.h>
//function declaration
int maximum (int x[],int n);
//definition of main() function

void main(void)
{int a[50],n,i,max;clrscr();
 printf("Enter  n value\n");
 scanf("%d",&n);
 printf("Enter array elements\n");
 for(i=0;i<n;i=i+1)
 {
  scanf("%d",&a[i]);
 } 
 max=maximum(a,n);
 printf("Maximum value is %d\n",max);
 getch();
}
//function to find maximum in an array
int maximum(int x[],int n)
{
 int maxval,i;
 maxval=x[0];
 for(i=1;i<n;i=i+1)
{if(x[i]>maxval)
 {
  maxval=x[i];
 }
}
 return maxval;
}

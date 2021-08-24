//to find the factorial of N
#include<stdio.h>
int main()
{long int x,n,f=1,temp;
 printf("enter n value");
 scanf("%d",&n);
 temp=n;
 for( ;n>=1;n=n-1)
 f=f*n;
 printf("factorial of %ld=%ld",temp,f);
 return 0;
}

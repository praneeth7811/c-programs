//to create a header file head4.h to calculate the sum of n numbers

int sum(int n)
{int x,c=1,sum=0;clrscr();
 for(c=1;c<=n;c=c+1)
 {
  printf("enter a no:");
  scanf("%d",&x);
  sum=sum+x;
 }
 return(sum);
}
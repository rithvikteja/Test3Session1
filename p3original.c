#include<stdio.h>
int input_n_and_r(int *n,int *r)
{
  printf("enter the value of n and r\n");
  scanf("%d%d",n,r);
  return 0;  
}
 int fact(int n)
{
  int i,ncr,r,sum=1;
  ncr=fact(n)/fact(r)*fact(n-r);
  for(i=1;i<=n;i++)
  {
    sum=sum*i;
  }
  return sum;
  }
  void output(int n,int r,int sum)
  {
    printf("value of %dC%d = %d\n",n,r,sum);
  }
  int main()
  {
    int n,r;
    input_n_and_r(&n,&r);
    fact(n);
    int sum;
    output(n,r,sum);
    return 0;
      }
      
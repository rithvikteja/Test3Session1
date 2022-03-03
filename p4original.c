int ncr(int n,int r)
{
int fact(int n),ncr,sum; 
  int i;
  ncr=fact(n)/fact(r)*fact(n-r);  
for(i=1;i<=n;i++)
  {
    sum=sum*i;
  }
  return sum;

  }
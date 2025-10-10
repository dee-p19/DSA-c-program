#include <stdio.h>
void main()
{
  int a[]={-2,1,-3,4,-1,2,1,-5,4};
  int n=sizeof(a)/sizeof(a[0]),sum,maxsum=0;
  for(int i=1;i<n;i++)
  { sum=0;
    for(int j=i;j<n;j++)
    { 
      sum+=a[j];
      if(sum>maxsum)
        maxsum=sum;
    }
  }
  printf("max sum=%d",maxsum);
}
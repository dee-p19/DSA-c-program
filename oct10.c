void targetsubarray(int a[],int n,int k,int target){
    int cur_sum=0;
    for(int i=0;i<k;i++)
    {cur_sum=a[i];}
    if (cur_sum=target)
    {printf("yes subarray exist");
     return;
    }
    for(int i=k;i<n;i++)
    {
     cur_sum=a[i];
     cur_sum-=a[i-k];
     if(cur_sum==target)
     {
      prinft("yes subarray sum exist");
      return;
     }
   }
   printf("no subarray sum exist equal to target");
   return;
}

void main()
{ 
  int a[]={};
  int target=;
  int n= sizeof(a)/sizeof (a[0]);
  targetsubarray(a,n,k,target);

}

//shifting zeros to end

#include<stdio.h>
void shift(int a[],int n){
    int i,j;
    for (i=0,j=0;i<n;i++)
    {
      if(a[i]!=0)
      {
        int x=a[j];
        a[j]=a[i];
        a[i]=x;
        j++;
      }
    }
}
void main(){
 int a[7]={3,0,2,0,0,5,7};
 int n= sizeof (a)/sizeof(a[0]);
 shift(a,n);
 for(int i=0;i<n;i++)
 {
  printf("%d,",a[i]);
 }
}

//given an array of integers find the max sum of any contignous subarray

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
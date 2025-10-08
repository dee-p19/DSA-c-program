#include<stdio.h>
void main() {
  int a[]={2,3,5,7,9,12,13,15,17};
  int target=21, b=3,c,sum;
  int n=sizeof (a)/sizeof (a[0]);
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<b;j++,c++)
     c=i;
     sum=a[c];
  }
  if(sum==target)
    printf("found");
}


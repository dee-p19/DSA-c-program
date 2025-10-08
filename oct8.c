/*#include<stdio.h>
void main()
{
 int a[] = {3,5,7,9,10,11,12,14,22,28};
 int target = 19,count=0;
 int n= sizeof(a)/sizeof a[0];
 printf("n=%d",n);
 for(int i=0;i<n;i++)
{
  for(int j=i+1;j<n;j++)
  {
    if(a[i]+a[j]==target)
      count++;
  }
}
printf("\nno. of pairs=%d",count );
}*/



// two pointer methode

/*#include <stdio.h>
void main()
{
  int a[]={3,5,7,9,14,22,28};
  int target=21,n= sizeof (a)/sizeof (a[0]);
  int count=0;  
  printf("n=%d",n);
  for(int l=0,r=n-1;l<r;){
  int sum = a[l]+a[r];
  if (sum== target)
    {count ++;
     l++,r--;
    }
  else
  { if (sum<target)
       l++;
  else
       r--;
  }
 printf("\nno.of pairs=%d",count);
}
}*/


    // shift all zeros in right side {1,0,2,3,12,0,0,5,7}



// sliding window
#include<stdio.h>
void main() {
  int a[]={2,3,5,7,9,12,13,15,17};
  int target=21, b=3,c,sum;
  int n=sizeof (a)/sizeof (a[0]);
  for(int i=0;i<n;i++)
  { sum=0;
    for(int j=0,c=i;j<b;j++,c++)
      sum=sum+a[c];
    if(sum==target)
    printf("found");
     break
  }
  
}


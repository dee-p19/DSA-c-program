#include<stdio.h>
void main()
{
int a[]={3,2,8,0,7,2,4};
int n=sizeof (a)/sizeof(a[0]),h,x,water=0;
for(x=1;x<n-1;x++)
 {int lmax=a[0],rmax=a[n-1];
 for(int i=0,j=n-1;i<x ||j> x;i++,j--)
 {
 if(lmax<a[i])
   lmax=a[i];
 if(rmax<a[j])
   rmax=a[j];
 }
 if(lmax<rmax)
   h=lmax;
 else
   h=rmax;
 if(a[x]<h)
  water+=h-a[x];
 }
 printf("%d",water);
}

int water_trap(int a[],int n){
    int leftm[n];int rightm[n];
    int ans=0;
    leftm[0]=a[0];
    for(int i=1;i<n;i++)
    {
     if(leftm[i-1]>a[i])
        leftm[i]=leftm[i-1]; 
     else
       leftm[i]=a[i];
    }

     rightm[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
     if(rightm[i+1]>a[i])
        rightm[i]=rightm[i+1]; 
     else
       rightm[i]=a[i];
    }

    for(int i=0;i<n;i++){
        int min=0;
        if (leftm[i]>rightm[i]) min=rightm[i];
        else min=leftm[i];
        ans+=(min-a[i]);
    }
    return ans;
}
int main(){
    int a[]={};
    int n=sizeof (a)/sizeof(a[0]);
    int x=water_trap(a,n);

}

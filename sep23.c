#include<stdio.h>
void main(){
  int a[]={1,2,4,5};
  int i,j,n=sizeof (a)/sizeof (a[0]);
    
    if(a[0]<a[1])
    {
      for(i=0;i<n;i++)
        {if(a[i]>a[i+1])
         {printf("not sorted");
           break;}
        }
     if (i==n)
      printf("array is sorted in ascending order");
    }   
     else  
    {
      for( j=0;j<5;j++)
        {if(a[j]<a[j+1])
        {printf("array is not sorted");
          break;}
        }
      if(j==n)
        printf("sorted in descending order");
    }
    
  }


  #include<stdio.h>
void main(){
  int a[]={1,2,3,4,50};
  int b[]={22,31,45,67,89};
  int i,j,n1=sizeof (a)/sizeof (a[0]);
  int n2=sizeof (b)/sizeof (b[0]);
  int c[n1+n2];
    
    for(i=0;i<n1;i++)
      c[i]=a[i];
    for(j=0;j<n2;j++)
      c[i+j]=b[j];
    
    for(i=0;i<n1+n2;i++)
      printf("%d ",c[i]);
}
   
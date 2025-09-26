#include<stdio.h>
void main(){
  int a[]={1,2,3,5};
  int i,j;
  
    if(a[i]<a[i+1])
    {
      for(i=0;i<5;i++)
        {if(a[i]>a[i+1])
         {
           printf("not sorted");
           break;
         }
        }
     if (i==5)
      printf("array is sorted in ascending order");
    }   
     else  
    {
      for( j=0;j<5;j++)
        {if(a[j]<a[j+1])
        {
          printf("array is not sorted");
          break;
        }
        }
      if(j==5)
        printf("sorted in descending order");
    }
    
  }
   
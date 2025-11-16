//malloc example
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int * pt;
  int n;
  printf("enter size of array:");
  scanf("%d",&n);
  pt=(int*)malloc(n*sizeof(int));
  for(int i=0;i<n;i++)
  {
    printf("enter the %d th element of array :",i);
    scanf("%d",&pt[i]);
  }
  for(int i=0;i<n;i++)
  {
    printf("%d\t",pt[i]);
  }
}

#include<stdio.h>
#include<string.h>
void main(){
  int* pt;
  int n,min=100,max=0;
    printf("enter no of students:");
    scanf("%d",&n);
    pt=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
      printf("enter marks of %dth student :",i+1);
      scanf("%d",&pt[i]);
        if(pt[i]<min)
            min=pt[i];
        if(pt[i]>max)
            max=pt[i];
        
    }
    printf("min marks:%d",min);
    printf("max marks:%d",max);
}

//calloc example
#include<stdio.h>
#include<string.h>
void main(){
  int* pt;
  int n,min=100,max=0;
    printf("enter no of students:");
    scanf("%d",&n);
    pt=(int*)calloc(n ,sizeof(int));
    for(int i=0;i<n;i++){
      printf("enter marks of %dth student :",i+1);
      scanf("%d",&pt[i]);
        if(pt[i]<min)
            min=pt[i];
        if(pt[i]>max)
            max=pt[i];
    }
    printf("min marks:%d",min);
    printf("max marks:%d",max);
}

//realloc example
#include<stdio.h>
#include<string.h>  
void main(){
  int* pt;
  int n;
    printf("enter no of students:");
    scanf("%d",&n);
    pt=(int*)calloc(n ,sizeof(int));
    for(int i=0;i<n;i++){
      printf("enter marks of %dth student :",i+1);
      scanf("%d",&pt[i]);}
    for(int i=0;i<n;i++){
       printf("%d\t",pt[i]);}
       
       
    }
        

#include<stdio.h>
#include<string.h>
void main()
{
 char a[]="hello welcome back everyone";
 int x=strlen (a);
 int cmax=0,gmax=0;
 for(int i=0;i<x;i++)
 {
   if(a[i]==" ")
   {
    if(cmax>gmax)
    {gmax=cmax;
    cmax=0;}
   }
   cmax++;
 }
 if(gmax<cmax){
  gmax=cmax;
}
 printf("len of max word:%d",gmax);
}
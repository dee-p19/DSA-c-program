#include<stdio.h>
void main()
{
  int i,j,k=1;
  int a[]={1,7,29,37,1,2,5};
  int n =sizeof(a)/sizeof(a[0]);
  int b[7];
  int found;
  b[0]=a[0];
  k=1;
  for(i=1;i<n;i++) {
    found = 0;
    for(j=0;j<k;j++) {
      if(a[i] == b[j]) {
        found = 1;
        break;
      }
    }
    if(!found) {
      b[k] = a[i];
      k++;
    }
  }
  for(i=0;i<k;i++)
    printf("%d ",b[i]);

}
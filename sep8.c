/*#include<stdio.h>
void main()
{
  int n,i,e=1,o=1;
  printf("enter a number");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
     {
      if(i%2==0)
        e=e*i;
      else
        o=o*i;
     }
  }
  printf("even factors=%d\n",e);
  printf("odd factors=%d",o);
}*/

/*#include <stdio.h>
void main() {
int i;
for(i=0;i<5;i++)
{
  printf("*");
}
}*/


/*#include <stdio.h>
void main() {
int n,i,j;
printf("enter a number");
scanf("%d",&n);
for(j=0;j<n;j++)
{
for(i=0;i<n-j;i++)
{
  printf("*");
}
printf("\n");
}
}*/

/*#include <stdio.h>
void main() {
int n,i,j;
printf("enter a number");
scanf("%d",&n);
for(j=1;j<=n;j++)
{
for(i=0;i<j;i++)
{
  printf("*");
}
printf("\n");
}
}*/


#include <stdio.h>
void main() {
int n,i,j,nst;
printf("enter a number");
scanf("%d",&n);
nst=(2*n)-1;
for(i=1;i<=n;i++)
{
  for(j=1;j<=nst;j++)
  {
    if(j<i)
     printf(" ");
    else
      printf("*");
  }
  nst--;
  printf("\n");
}
}


#include <stdio.h>
void main() {
int n,i,j,nst,nsp;
printf("enter a number");
scanf("%d",&n);
nst=(2*n)-1;
nsp=0;
for(i=1;i<=n;i++)
{
  for(j=1;j<=nsp;j++)
  {
    printf(" ");
  } 
  for(j=1;j<=nst;j++)
  {
      printf("*");
  }
  printf("\n");
  nsp++;
  nst=nst-2;
}
}
/*WAP to print the following pattern 
    *       
   **
  ***
 ****
*****  */
/*#include<stdio.h>
void main()
{
  int n,nsp,nst,i,j;
  scanf("%d",&n);
  nsp=n-1;    
  nst=1;
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
    nsp--;
    nst++;
    printf("\n");
  }
}*/


#include <stdio.h>
void main() {
int n,i,j,nst,nsp;
printf("enter a number");
scanf("%d",&n);
nst=1;
nsp=(2*n)-3;
for(i=1;i<=n;i++)
{
  for(j=1;j<=nst;j++)
    {printf("*");}
  for(j=1;j<=nsp;j++)
   {printf(" ");}
  for(j=1;j<=nst;j++)
   {printf("*");}
  nst++;
  nsp=nsp-2;
  printf("\n");
}

}

 

#include <stdio.h>
void main() {
int n,i,j,nst,nsp;
printf("enter a number");
scanf("%d",&n);
nst=1;
nsp=(2*n)-3;
for(i=1;i<=n;i++)
{
  for(j=1;j<=nst;j++)
    {printf(" * ");}
  for(j=1;j<=nsp;j++)
   {printf("   ");}
  for(j=1;j<=nst;j++)
   {printf(" * ");}
  nst++;
  nsp=nsp-2;
  printf("\n");
}

}


#include <stdio.h>
void main() {
  int n,i,j,nst;
  printf("enter a number");
  scanf("%d",&n);
  nst=1;
  for(i=1;i<=n;i++) 
  {
    for(j=1;j<=nst;j++)
      {printf(" * ");}
    if(i<=(n/2))
      nst++;
    else
      nst--;
    printf("\n");
  }
}
 

#include <stdio.h>
void main() {
  int nsp,nst,n,i,j;
  printf("enter a number");
  scanf("%d",&n);
  nst=1;
  nsp=n-2;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=nst;j++)
      {printf(" * ");}
    for(j=1;j<=nsp;j++)
      {printf("   ");}
    for(j=1;j<=nst;j++)
      {printf(" * ");}
    if(i<n/2)
      nst++;
    else
      nst--;
  }
}

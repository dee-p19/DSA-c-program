/*#include<stdio.h>
void main()
{
  int a,b,sm,i;
  printf("enter two numbers");
  scanf("%d%d",&a,&b);
  if (a<b)
   sm=a;
  else
   sm=b;
  
     while("true")
        { 
          if(a%sm==0 && b%sm==0)
          { printf("HCF=%d",sm);
           break;}
          else
            sm--;
        }
    }*/


/*# include<stdio.h>
void main()
{ int n,i;
 printf("enter a number");
 scanf("%d",&n); 
 for(i=0;n>0;i++)
   { n=n/10; }
  printf("number of digits=%d",i);
}*/


/*#include<stdio.h>
int main(){
  int a,s;
  printf("enter a number");
  scanf("%d",&a); 
  for(s=0;a>0;)
  {
    s=s+a%10;
    a=a/10;
    ;
  }
 printf("sum of digits=%d",s);
}*/


/*#include<stdio.h>
int main(){
  int a,l,rev;
  printf("enter a number");
  scanf("%d",&a); 
  for(rev=0;a>0;)
  {
    l=a%10;
    a=a/10;
    rev= (rev*10)+l;
  }
 printf("sum of digits=%d",rev);
}*/


/*#include<stdio.h>
int main(){
  int a,x,l,rev;
  printf("enter a number");
  scanf("%d",&a); 
  x=a;
  for(rev=0;a>0;)
  {
    l=a%10;
    a=a/10;
    rev= (rev*10)+l;
  }
  if (x==rev)
    printf("palindrome number");
  else
    printf("not a palindrome number");
 
}*/

#include<stdio.h>
int main()
{ 
  int n,d,x,l,y,i,s=0,k;
 printf("enter a number");
 scanf("%d",&n);
 x=n; 
 for(d=0;n>0;d++)
   { n=n/10; }
  printf("number of digits=%d\n",d);
  y=x;
  while(x>0)
  { k=1;
    l=x%10;
    x=x/10;
    for ( i=1;i<=d;i++)
    {
      k=k*l;
    }
    s=s+k;
  }
  if(y==s)
    printf("narcissistic number");
  else
    printf("not a narcissistic number");
 }

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




 
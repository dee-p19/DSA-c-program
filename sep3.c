
/*#include <stdio.h>
void main()
{ int n;
  printf("enter a number");
  scanf("%d",&n)
  int i=1,j=2
}


#include <stdio.h>
void main()
{ int n,temp1,even=0,odd=0;
  printf("enter a number");
  scanf("%d",&n);
  while(temp1<=n){
     if (temp1%2==0)
       even * =temp;
     else
       odd*=temp1;
    temp1++;

  }
}


#include <stdio.h>
void main()
{  int i,j,k;
  int arr[20]= {0,1,1,2,3,5};
  for(i=0,k=6;i<10 ;i++)
  {
     arr[k]= arr[k-1]+arr[k-2];
  } 
  for(i=0;i<)
  printf("%d",arr[]);

}*/


/*#include<stdio.h>
void main()
{
  int fst=0,sec=1,n,i;
  printf("n=");
  scanf("%d",&n);
  printf("%d\n%d\n",fst,sec);
  for(i=0;i<n-2;i++)
  {
     int curr= fst+sec;
     fst=sec;
     sec=curr;
     printf ("%d\n",curr);
  }
}*/

/*#include<stdio.h>
void main()
{
  int i,n;
  printf("enter a number:");
  scanf("%d",&n);
  for(i=2;i<n;i++)
  {
    if(n%i==0)
      break;
  }
   if(i==n)
     printf("prime number");
   else
     printf("not prime");

}*/



#include <stdio.h>
void main()
{
  int a,b,i=2,big;
  printf("enter two number a and b");
  scanf("%d %d",&a,&b);
  if (a>b)
   { big=a;
     if(big%b==0)
      printf("LCM=%d",big);
     else
       {
        while ("True") {
           if((big*i)%b==0);
            {printf("LCM = %d",big*i);
            break;
            }
          i++;
         }
       }
    }
  else
  { big=b;
    if(big%a==0)
      printf("LCM=%d",big);
     else
       {
        while ("True") {
           if((big*i)%a==0);
            {printf("LCM = %d",big*i);
            break;
            }
          i++;
         }
       }

  }


}


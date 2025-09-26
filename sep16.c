//sep15 (functions basics)
#include<stdio.h>

int fab(int n,int fst,int sec)
    {
      int nxt;
      printf("%d\n%d\n",fst,sec);
      for(int i=0;i<n-2;i++)
     { int nxt=fst+sec;
      printf("%d\n",nxt);
      fst=sec;
      sec=nxt;
     }
     return 0;
    }

void main()
{   int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    fab(n,0,1);
}

//sep 16 (pointers)

//WAP which will take 2 digit  no as input and swap them using function

#include<stdio.h>
void main()
{
  int x,a,b;
    printf("enter the 2 no:");
    scanf("%d%d",&a,&b);
    x=a;
    a=b;
    b=x;
    printf("after swapping a=%d b=%d",a,b);


}

#include<stdio.h>
void  fun(int a)
{
    a=25;
    printf("value of a in fun=%d\n",a);
}
 
void main()
{
    int a=5;
    printf("value of a is%d\n",a);
    fun(a);
    printf("value of a is%d\n",a);
}



#include<stdio.h>
void  fun(int *x)
{
  *x=25;
  printf("value of a in fun=%d\n",*x);
}
 void main()
{
  int a=5;
  printf("value of a is%d\n",a);
  fun(&a);
  printf("value of a is%d\n",a);
}


#include<stdio.h>
void swap(int* x, int* y){
int c=*x;
*x=*y;
*y=c;
printf("after swapping a=%d b=%d",*x,*y);
} 
int main(){
int a=7;
int b=5;
swap(&a,&b);
}


#include<stdio.h>
void swap(int* x, int* y){
 *x= *x+*y;
 *y= *x-*y;
 *x= *x-*y;
printf("after swapping a=%d b=%d",*x,*y);
} 
void main(){
int a=7;
int b=5;
swap(&a,&b);
}
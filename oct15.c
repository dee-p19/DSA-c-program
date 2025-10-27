//string

#include<stdio.h>
 void main(){
 char name[]="hello";
 for(int i=0;i<5;i++)
  printf("%c",name[i]);
}


#include<stdio.h>
#include<string.h>
int main(){
char a[50];
fgets(a,sizeof(a),stdin);
int x=strlen(a);
for(int i=0;i<x-1;i++)
 printf("\t %c",a[i]);
printf("\n length:%d",x);
}

#include<stdio.h>
#include<string.h>
int main(){
char a[50];
fgets(a,sizeof(a),stdin);
int x=strlen(a),c=0;
for(int i=0;i<x;i++)
 {if(a[i]==" ")
   c++;}
printf("no of words:%d",c+1);
}

//concatinaiton

#include<stdio.h>
#include<string.h>
void main(){
char a[50];
printf("enter a string");
fgets(a,sizeof(a),stdin);
int x=strlen(a);
for(int i=0;i<x;i++)
{
 if(a[i]==',')
  {a[i]='.';}
 else if(a[i]=='.')
  {a[i]=',';}
}
for(int i=0;i<x;i++)
  printf("%c",a[i]);
}

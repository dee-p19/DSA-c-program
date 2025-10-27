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
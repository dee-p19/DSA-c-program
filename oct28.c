#include<stdio.h>
#include<string.h>
void main(){
  char a[50]="abcd";
  char r[50]="cdab";
  strcat(r,r);
  if(strstr(r,a)!=NULL)
    printf("rotated");
  else
    printf("not rotated");
}




#include<stdio.h>
#include<string.h>
int main(){
  char a[50],r[50];
  printf("enter string:");
  fgets(a,sizeof(a),stdin);
  printf("enter another string:");
  fgets(r,sizeof(r),stdin);
   a[strcspn(a, "\n")] = '\0';
    r[strcspn(r, "\n")] = '\0';

  strcat(r,r);
  if(strstr(r,a)!=NULL)
    printf("rotated");
  else
    printf("not rotated");
return 0;
}


//anagram
#include<stdio.h>
#include<string.h>  
void main(){
  char a[50]="xayzbb",b[50]="bxyzba";
  int temp[26]={0},i;
  if(strlen(a)!=strlen(b)){
    printf("not anagram");
  }
  else{
  for(int i=0;a[i]!='\0';i++){
    temp[a[i]-'a']++;
    temp[b[i]-'a']--;
  }
  for(int i=0;i<26;i++){
    if(temp[i]!=0){
      printf("not anagram");
      break;
    }
  }
  if(i==26)
      printf("anagram");
  }
}
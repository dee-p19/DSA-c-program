//structure
#include<stdio.h>
struct stud {
    char name[20]; 
    int age;
};
void main(){
  struct stud s1;
  s1.age=20;
  printf("age=%d\n",s1.age);
  //s1.name="Alice"; (this will give error so we use below method)
  strcpy(s1.name,"Alice");
}
//

#include<stdio.h>
struct stud {
    char name[20]; 
    int age;
    int roll_no;
}s1,s2,s3;
void main(){
    s1.age=20;
    s2.roll_no=21;
}  

  

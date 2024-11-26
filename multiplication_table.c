#include<stdio.h>
int main(){
  int num;
  printf("enter the number:");
  scanf("%D",&num);
  for(int i=1;i<=10;i++){
    printf("%dx%d=%d\n",num,i,num*i);
  }
}
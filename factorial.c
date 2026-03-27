//Factorial program
#include<stdio.h>

int main(){
  int f;
  scanf("%d",&f);
  int fact = 1;
  for (int i=1;i<=f;i++){
    fact = fact*i;
  }
  printf("%d",fact);
  return 0;
}

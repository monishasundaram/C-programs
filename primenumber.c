//Prime number Check
#include<stdio.h>
#include<math.h>
int main(){
  int n,i;
  //Count for counting the times of n divisible
  int count = 0;
  scanf("%d",&n);
  if (n <= 1) {
    printf("Not a prime number");
  }
  //Check the num is divisible by one and itself
  else {
    for (i = 1; i <= n; i++) {
      if (n % i == 0) {
        count++;
      }
    }
  }
  //If it is divisible by one and itself then count is 2
  if (count == 2){
    printf("Prime Number");
  }
  else{
    printf("Not a prime number");
  }
  return 0;
  }

//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

//Find the sum of all the multiples of 3 or 5 below 1000.



#include <stdio.h>
#include <stdlib.h>

int main(){
  int x;
  int ans = 0;
  for(x = 1; x < 1000; x++){
    if((x % 5 == 0) || (x % 3 == 0)){
      ans += x;
    }
  }
  printf("The answer is %d\n", ans);
  return 0;
}

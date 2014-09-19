#include <stdio.h>
#include <stdlib.h>

int main(){
  char string[] = "Hel09";
  //  string[0] = 'H';
  //string[1] = 'e';
  //  string[2] = 'l';
  // string[3] = 'l';
  // string[4] = 'o';
  //string[5] = 0;
  
  int i = 0;
  while (string[i]){
    i++;
  }

  printf("%s The string is %d letters long\n", string,i);
    

  return 0;
}

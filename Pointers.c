#include <stdio.h>
#include <stdlib.h>

int main(){
  char c;
  double d;
  int i;

  char *pc = &c;
  double *pd = &d;
  int *pi = &i;
  
  printf("pc = %lu \npd = %lu \npi = %lu\n", pc,pd,pi);
  pc++;
  pd++;
  pi++;
  printf("\npc = %lu \npd = %lu \npi = %lu\n", pc,pd,pi);

  return 0;
}

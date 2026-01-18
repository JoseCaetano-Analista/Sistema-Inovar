#include <stdio.h>

int main(){
  int x = 65;
  char ch; 
  float f = 25.1;
  ch = x;
  x = f;
  printf("ch=%d e x=%d\n", ch, x);
  return 0;
}

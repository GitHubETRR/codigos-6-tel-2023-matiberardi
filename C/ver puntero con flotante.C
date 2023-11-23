#include <stdio.h>

int main(void) {
  float float1;
  char *puntero = (char *) &float1;
  float1 = 13.25;
  
  printf("%.2x",*puntero);
  printf("%.2x",*(puntero+1));
  printf("%.2x",*(puntero+2)); 
  printf("%.2x",*(puntero+3));

  return 0;
}

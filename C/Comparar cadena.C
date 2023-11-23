#include <stdio.h>
int comparar_cadenas(char *p1, char *p2 ) {
  while (*p1 != '\0' && *p2 != '\0') {
    if (*p1 != *p2) {
      return 0; 
    }
  
    p1++;
    p2++;
  }
  return 1; 
}



int main(void) {
  char string1[100], string2[100];
  printf("Ingrese la primer cadena: ");
  scanf("%s", string1);
  printf("Ingrese la segunda cadena: ");
  scanf("%s", string2);
  if (comparar_cadenas(string1, string2)) {
    printf("Las cadenas son iguales\n");
  } else {
    printf("Las cadenas son diferentes\n");
  }

  return 0;
}


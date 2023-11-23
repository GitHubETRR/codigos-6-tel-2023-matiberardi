#include <stdio.h>

void porValor (int);
void porReferencia(int *);

int main(){
  int valor = 10;
  int referencia = 10;
  int *puntero_referencia = &referencia;
  
  porValor(valor);
  printf("Despues de la llamada a porValor, el valor es: %d\n", valor);
  
  porReferencia(puntero_referencia);
  printf("Despues de la llamada a porReferencia, el valor es: %d\n", referencia);
  
  return 0;
}

void porValor(int valor){
  valor = valor + 10;
  printf("Dentro de la funcion porValor, el valor es: %d\n", valor);
}

void porReferencia(int *puntero_referencia){
  *puntero_referencia = *puntero_referencia + 10;
  printf("Dentro de la funcion porReferencia, el valor es: %d\n", *puntero_referencia);
}

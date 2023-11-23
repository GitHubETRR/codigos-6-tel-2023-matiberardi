#include <stdio.h>

int main(void) {
  union{
    struct campo{
      unsigned int mantisa : 23;
      unsigned int exponente : 8;
      unsigned int signo : 1;
    }IEEE_754;
    float numero;
  }pasaje;
  
  printf("Ingrese un numero con coma: ");
  scanf("%f", &pasaje.numero);
  
  printf("el signo es: %x\n", pasaje.IEEE_754.signo);
  printf("el exponente es: %.2x\n", pasaje.IEEE_754.exponente);
  printf("la mantisa es: %.2x\n", pasaje.IEEE_754.mantisa);
  
  
  printf("completo: 0x%X", pasaje.IEEE_754);
  
  return 0;
}

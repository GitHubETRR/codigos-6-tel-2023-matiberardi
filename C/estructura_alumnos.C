#include <stdio.h>
#define vector 30

void estructura_alumno1(void);
void estructura_alumno2(void);
void imprimir_alumno1();
void imprimir_alumno2();
struct alumons {
  char nombre[vector];
  char apellido[vector];
  int  dni;
  int  edad;
  char casa[vector];
} alumnos1,alumnos2;

int plan_num=0;

int main(void) {
  int var;
  estructura_alumno1();
  estructura_alumno2();
  printf("ingrese 1 0 2 segun la info del alumno que quiera ver\n");
  scanf("%d",&var);
  if (var==1) imprimir_alumno1();
  else if(var==2)imprimir_alumno2();
  return 0;
}

void estructura_alumno1(){
  printf("ingrse el apellido del alumno 1\n");
  scanf("%s",alumnos1.apellido);
  printf("ingrese el nombre del alumno 1\n");
  scanf("%s",alumnos1.nombre);
  printf("ingrse el dni del alumno1\n");
  scanf("%d",&alumnos1.dni);
  printf("ingrese la edad del alumno 1\n");
  scanf("%d",&alumnos1.edad);
  printf("ingrese su direccion del alumno 1\n");
  scanf("%s",alumnos1.casa);

}

void estructura_alumno2(){
  printf("ingrse el apellido del alumno 2\n");
  scanf("%s",alumnos2.apellido);
  printf("ingrese el nombre del alumno 2\n");
  scanf("%s",alumnos2.nombre);
  printf("ingrse el dni del alumno 2\n");
  scanf("%d",&alumnos2.dni);
  printf("ingrese la edad del alumno 2\n");
  scanf("%d",&alumnos2.edad);
  printf("ingrese su direccion del alumno 2\n");
  scanf("%s",alumnos2.casa);

}
void imprimir_alumno2(){
    printf("Apellido: %s\n",alumnos2.apellido);
    printf("nombre: %s\n",alumnos2.nombre);
    printf("dni: %d\n",alumnos2.dni);
    printf("edad: %d\n",alumnos2.edad);
    printf("casa: %s\n",alumnos2.casa); 
}
void imprimir_alumno1(){
    printf("Apellido: %s\n",alumnos1.apellido);
    printf("nombre: %s\n",alumnos1.nombre);
    printf("dni: %d\n",alumnos1.dni);
    printf("edad: %d\n",alumnos1.edad);
    printf("casa: %s\n",alumnos1.casa);
  
}

#include <iostream>
using namespace std;
#define CANT 3
#define ASIENTOS 3
void Informacion(void);
void Seleccion_vuelo(void);
void Seleccion_asiento(int);

class Vuelo {
  public:
    string destino;
    string hora;
    float precio;
    int asientosDisponibles;
    string nombresAsientos[ASIENTOS];
} vuelosDisponibles[CANT];

int main() {
  vuelosDisponibles[0]={"Nueva York","08:00",300.0,ASIENTOS,"A0","A1","A2"};
  vuelosDisponibles[1]={"Los Angeles","10:30",250.0,ASIENTOS,"B0","B1","B2"};
  vuelosDisponibles[2]={"Chgo","12:45",200.0,ASIENTOS,"C0","C1","C2"};
  Informacion();
  Seleccion_vuelo();
  return 0;
}

void Informacion(void){
  cout << "Sistema de Reservas de Vuelos" << endl;
  cout << "Vuelos Disponibles:" << endl;
  for (int i = 0; i < CANT; i++) {
    cout << i + 1 << ". Destino: " << vuelosDisponibles[i].destino << endl;
    cout << "Hora: " << vuelosDisponibles[i].hora << endl;
    cout << "Precio: $" << vuelosDisponibles[i].precio << endl;
    cout << "Asientos Disponibles: " << vuelosDisponibles[i].asientosDisponibles << endl;
  }

}

void Seleccion_vuelo(void){
  int opcion;
  cout << "Seleccione un vuelo (1-" << CANT << "): ";
  cin >> opcion;
  if ((opcion >= 1) && (opcion <= CANT)) {
    Seleccion_asiento(opcion);
  } else {
    cout << "Opción no válida." << endl;
  }
}

void Seleccion_asiento (int opcion)
{
  int continuar, eleccionAsiento;
  bool flag = false;
  cout << "Elegi un asiento: " << endl;
  for (int i = 0; i < ASIENTOS; i++) { //imprime lista de asientos
    cout << i + 1 << ". " << vuelosDisponibles[opcion - 1].nombresAsientos[i] << endl;
  }
  cin >> eleccionAsiento;

  for (int i = 1; i <= ASIENTOS; i++) {
    if (i == eleccionAsiento){
      cout << "Asiento reservado exitosamente" << endl;
      cout << "Reserva exitosa. Su vuelo a " << vuelosDisponibles[opcion - 1].destino << " ha sido reservado." << endl;
      flag = true;
    } 
  }
  if (flag == false) cout << "Asiento no disponible, intente en unos minutos" << endl;
}

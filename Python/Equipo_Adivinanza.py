import random

equipos = ['Barcelona', 'River', 'Boca', 'Chelsea', 'Argentina']
jugadores_por_equipo = {
  'Barcelona': ['Araujo', 'Gundogan', 'Pedri', 'Gavi', 'Lewandosky'],
  'River': ['Armani', 'Diaz', 'Casco', 'Barco', 'Solaria'],
  'Boca': ['Cavani', 'Merentiel', 'Bendetto', 'Romero', 'Barco'],
  'Chelsea': ['Cucurella', 'Sterling', 'James', 'Fernandez', 'Gallagher'],
  'Argentina': ['Messi', 'Otamendi', 'Martinez', 'Montiel', 'Gonzales']
}

equipo_seleccionado = random.choice(equipos)


print("Jugadores de", equipo_seleccionado)


adivinanza = input("\nIntenta adivinar un jugador del equipo. Escribe su nombre: ")

while (adivinanza not in jugadores_por_equipo[equipo_seleccionado]):
  print("Incorrecto ¡Inténtalo de nuevo!")
  adivinanza = input("\nIntenta adivinar un jugador del equipo. Escribe su nombre: ")

print("¡Correcto! ¡", adivinanza, "es un jugador del", equipo_seleccionado, "!")

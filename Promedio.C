#include <stdio.h>
#define NOTAS 5
int i=0;
int suma=0;
int aprobado=0;
int desaprobado=0;
float dividir;
void ingreso(int vector[NOTAS]);
void adicion (int vector[NOTAS]);
void comparacion (int vector[NOTAS]);
void promedio (int vector[NOTAS]);
int vector [NOTAS];

int main(void) {
  printf("Ingrese las calificaciones: \n");
  ingreso (vector);
  adicion (vector);
  comparacion (vector);
  promedio (vector);
  return 0;
}

void ingreso(int vector[NOTAS]){
  // int i=0;
  for(i=0;i<NOTAS;i++){
    scanf("%d", &vector[i]);
   }
}
void adicion (int vector[NOTAS]){
  //int suma=0;
  for(i=0;i<NOTAS;i++){
    suma=suma+vector[i];
    }
} 
void comparacion (int vector[NOTAS]){
  // int aprobado=0;
  // int desaprobado=0;
  for(i=0;i<NOTAS;i++){
    if (vector[i]>=7) aprobado++;
    else desaprobado++;
  }
}
void promedio (int vector[NOTAS]){
  // float dividir;
  dividir = ((float)suma/NOTAS);
  printf("El promedio es de: %.2f\n", dividir);
  printf("La cantidad de aprobados son: %d\n", aprobado);
  printf("Los alumnos que deben recuperar son: %d\n", desaprobado);
}

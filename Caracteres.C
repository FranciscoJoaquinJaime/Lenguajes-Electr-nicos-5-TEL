#include <stdio.h>
#define CARACTERES 50

int main(void) {
  int i;
  char palabra[CARACTERES];
  printf("Ingrese una palabra: \n");
  scanf("%s", palabra);
  for (i=0; i<CARACTERES; i++)
    {  
      if (palabra[i] == '\0')
      break;
    }
  printf("Cantidad de caracteres de su palabra: %d caracteres \n",i);
  return 0;
}

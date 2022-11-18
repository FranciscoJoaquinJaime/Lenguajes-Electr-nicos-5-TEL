#include <stdio.h>
#define LIM 20
void vocal (char palabra[LIM]);
char palabra [LIM];

int main(void) {
  printf("Ingrese los caracteres \n");
  scanf("%s", palabra);
  vocal (palabra);
  return 0;
}

void vocal (char palabra[LIM]){
  int a=0, e=0, i=0, o=0, u=0; 

  for (int j=0; j<LIM; j++){
   if(palabra[j] == 'a') a++;
   else if (palabra[j] == 'e') e++;
   else if (palabra[j] == 'i') i++;
   else if (palabra[j] == 'o') o++;
   else if (palabra[j] == 'u') u++;
    
  }
  printf("Tuviste una cantidad de %d de A's\n",a);
  printf("Tuviste una cantidad de %d de E's\n",e);
  printf("Tuviste una cantidad de %d de I's\n",i);
  printf("Tuviste una cantidad de %d de O's\n",o);
  printf("Tuviste una cantidad de %d de U's\n",u);
}

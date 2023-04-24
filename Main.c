#include <stdio.h>
#include "matematicas.h"

int main() {
  
  int opc;
  double x, y, numeros[100];
  do{  
  printf("Seleccione una opcion:\n");
  printf("1. Potencia\n");
  printf("2. multiplicatoria\n");
  printf("3. sumatoria\n");
  printf("4. Salir\n");
  scanf("%d",&opc);
    
  switch (opc){
    case 1:
    potencia(x,y);
    break;
    
    case 2:
    multiplicatoria(numeros);
    break;
    
    case 3:
    sumatoria(numeros);
    break;
    
    case 4:
    printf("Hasta pronto");
    break;
    default:
    printf("Error\n");
    break;
  }
} 
  while(opc!=4);
  
  return 0;
}

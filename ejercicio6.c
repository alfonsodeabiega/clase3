/*Alfonso Francisco De Abiega L'Eglisse
clase 3 ejercicio 6*/

#include <stdio.h>

void main()
{
  int elem;
  printf("Dame el numero de elementos de la serie");
  scanf("%d", &elem);
  
  for(int i = 5; i <= elem; i = i +5)
  {
    printf("%d, ",i);
  }

  printf("\n");
}

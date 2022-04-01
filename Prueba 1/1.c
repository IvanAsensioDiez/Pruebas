#include <stdio.h>
int main() {
  int i, n;
  // Definimos un vector de dimension muy grande
  int vect[100];

  printf("Nº datos? ");
  //El usuario debe teclear un n < 100
  scanf("%d", &n);
  //Utilizamos solo las n primeras
  for(i = 0; i < n; i++)
    {
      scanf("%d", &vect[i]);
    }
  return 0;
}

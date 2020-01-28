#include <stdio.h>

int main(){

int inicial = 1;
int eje = 31;
int nivel;

printf("¿Altura? ");
scanf("%d", &nivel);


for(int altura = inicial; altura <= nivel; altura++){

  for(int indice = 1; indice <= eje - altura; indice++){
      printf(" ");
  }
  printf("%d", inicial);

  for(int indice = inicial + 1; indice <= altura; indice++){
      printf("%1d", indice);
  }

  for(int indice = altura - 1; indice >= inicial; indice--){
      printf("%1d", indice);
  }

  printf("\n");

}

}

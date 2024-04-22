#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 5
#define MAX 101

main() {
  int vet[TAM], x, mod, div, cont;
  srand(time(NULL));
  for(x = 0; x < TAM; x++){
    do{
      cont = 0;
      mod = 0;
      vet[x] = rand() % MAX; 
      for(cont = 1; cont <= vet[x]; cont ++){
        div = vet[x] % cont;
        if(div == 0){
          mod++;
        }
      }
    }while(mod != 2);
  }
  printf("\nVetor: ");
  for(x = 0; x < TAM; x++){
    if(x == TAM - 1){
      printf("%i\n", vet[x]);
    }
    else{
      printf("%i - ", vet[x]);
    }
  }
  getchar();
}
/*
ALGORITMO
  DECLARE idade numérico
  ESCREVA "Digite sua idade:"
  LEIA idade
  SE ((idade > 18) OU (idade < 18))
    ESCREVA "Você não tem 18 anos."
  SENAO
    ESCREVA "Você possui 18 anos."
  FIM_SE
FIM_ALGORITMO
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int idade;

  printf("Digite a sua idade: ");
  scanf("%d", &idade);

  if ((idade > 18) || (idade < 18)){
    printf("Você não tem 18 anos.\n");
  } else {
    printf("Você possui 18 anos.\n");
  }
  return 0;
}
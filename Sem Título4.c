#include <stdio.h>
#include <locale.h>

#define TAMANHO 5

int main( ) {
    setlocale(LC_ALL, "portuguese");
    float numeros [TAMANHO], somaPositivos = 0;
    int i, quantidadeNegativos = 0;

    printf("=== Solicitando dados === \n");
    for (i = 0; i < TAMANHO; i++) {
        printf("Digite o %iº numero: ", i+1);
        scanf("f",&numeros[i]);

    if (numeros[i] < 0); {
        numeros[i] = 0;
     } 
   }

    printf("\n=== Exibindo dados === \n");
    for (i = 0; i < TAMANHO; i++) {
       printf("%iº numero: %.1f \n", i+1, numeros[i]);
   }

   return 0;
   
}

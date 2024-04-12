#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>
#define TAM 6

int main() {
    setlocale(LC_ALL, "");
    int numeros[6];
    int i, quantidadePares = 0, quantidadeImpares = 0;

    printf("=== Solicitando dados para o usuario === \n");
    for (i = 0; i < 6; i++) {
    printf("Digite o %iº número: ", i+1);
    scanf("%i", &numeros[i]);

    if (numeros[i] % 2 == 0) {
       quantidadePares++;
   } else {
       quantidadeImpares++;
   }
 }

   printf("\n === Exibindo dados para o usuario === \n");
   for (i = 0; i < 6; i++) {
        printf("%iº número: %i \n", i+1, numeros[i]);
}

printf("Quantidade de pares: %i \n", quantidadePares);
printf("Quantidade de ímpares: %i \n", quantidadeImpares);

return 0;

}

#include <stdio.h>
#include <locale.h>
#include <limits.h>

#define TAM 5

   int main() {
   setlocale(LC_ALL, "");

   int numeros[TAM];
   int maiorNumero = INT_MIN;
   int menorNumero = INT_MAX;
   int i;

   printf("Digite os numeros solicitados:\n");
   for (i = 0; i < TAM; i++) {
    printf("Digite o %d� mumero: ", i + 1);
    scanf("%i", &numeros[i]);

   if (numeros[i] > maiorNumero) {
   maiorNumero = numeros[i];
   }
   if (numeros[i] < menorNumero) {
   menorNumero = numeros[i];

   if (numeros[i] < menorNumero) {
   menorNumero = numeros[i];
   }
 }

   printf("\nExibindo os numeros informados:\n");
   for (i = 0; i < TAM; i++) {
   printf("%d� numero: %i \n", i + 1, numeros[i]);
   }

   printf("\nMaior n�mero: %i \n", maiorNumero);
   printf("Menor n�mero: %i \n", menorNumero);

   return 0;

}

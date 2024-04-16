#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
    int i, numeros[5];
    int pares = 0, impares = 0;
    int positivos = 0, negativos = 0;
    int maior, menor;
    float mediaTotal = 0, mediaPares = 0, mediaImpares = 0;

    // Solicitando números.
    for (i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &numeros[i]);

    // Pares e ímpares.
    if (numeros[i] % 2 == 0) {
            pares += numeros[i];
        } else {
            impares += numeros[i];
        }

    // Positivos e negativos.
        if (numeros[i] > 0) {
            positivos++;
        } else if (numeros[i] < 0) {
            negativos++;
        }

    // Maior e menor número.
        if (numeros[i] > maior) {
            maior = numeros[i];
        } else if (numeros[i] < menor) {
            menor = numeros[i];
        }

    // Média dos pares e ímpares.
        if (numeros[i] % 2 == 0) {
            mediaPares += numeros[i] / pares;
        } else {
            mediaImpares += numeros[i] / impares;
        }
        

    // Média total.
        mediaTotal += numeros[i] / 5;
    }

    // Exibindo resultados.
    printf("=== Exibindo resultados ===\n");
    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);
    printf("Quantidade de números positivos: %d\n", positivos);
    printf("Quantidade de números negativos: %d\n", negativos);
    printf("Quantidade de números inseridos: %d\n", i);
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    printf("Média dos números pares: %.2f\n", mediaPares);
    printf("Média dos números ímpares: %.2f\n", mediaImpares);
    printf("Média de números inseridos: %.2f\n", mediaTotal);
    printf("Números lidos na ordem inversa:\n");
    for (i = 4; i >= 0; i--) {
         printf("%d", numeros[i]);
    }

    return 0;
}

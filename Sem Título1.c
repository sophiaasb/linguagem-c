#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

#define TAMANHO 5

int main() {
	setlocale(LC_ALL, "portuguese");
	
	char nomes[TAMANHO][200];
	int idades[TAMANHO];
	int i;
	
	printf("=== Solicitando dados === \n");
	for (i = 0; i < TAMANHO; i++) {
     	printf("Digite o %i� nome: ", i+1);
	    scanf("%s", &nomes[i]);
	
      	printf("Digite a %i� idade: ", i+1);
    	scanf("%i", &idades[i]);
    	
    	printf("\n");
   }
	
	printf("\n=== Exibindo dados === \n");
	for (i = 0; i < TAMANHO; i++) {
		printf("%i� nome: %s \n", i+1, nomes[i]);
		printf("%i� idade: %i \n\n", i+1, idades[i]);
	}

   return 0;

}


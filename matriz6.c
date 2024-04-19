#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    
    int i, j;
    char disciplinas[3][250];
    float notas[3][2];
    float media[3];
	float somaNotas;

	printf("=== Solicitando dados === \n");
    for (i = 0; i < 3; i++) {
    	printf("Digite o nome da %dº disciplina: ", i+1);
		gets(disciplinas[i]);
		
		for (j = 0; j < 2; j++) {
			printf("Digite a %dª nota: ", j+1);
			scanf("%f",&notas[i][j]);		
			
			somaNotas += notas[i][j];
		}

	media[i] = somaNotas / j;
	somaNotas = 0;
	fflush(stdin);
	
}  

	printf("\n");

    printf("\n=== Exibindo dados === \n");
    
    for (i = 0; i < 3; i++) {
    	printf("%dº disciplina: %s \n", i+1, disciplinas[i]);
    	
    	for (j = 0; j < 2; j++) {
    		printf("%dª nota: %.1f \n", j+1, notas[i][j]);
		}
		
		printf("Média: %.1f \n", media[i]);

	    if (media[i] >= 7) {
		printf("Aprovado.");
	} else if (media[i] >= 5) {
		printf("Recuperação.");
	} else {
		printf("Reprovado."):
	}
		
		printf("\n");
	}
    
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    
    int i, j;
    char disciplinas[3][200];
    float notas[3][2];
    float media[2], soma = 0;

	printf("=== Solicitando dados === \n");
    for (i = 0; i < 3; i++) {
    	printf("Digite o nome da %iº disciplina: ", i+1);
		scanf("%s",&disciplinas[i]);
		
		for (j = 0; j < 2; j++) {
			printf("Digite a %iª nota: ", j+1);
			scanf("%f",&notas[i][j]);
			
			soma += notas[i][j];
		}

	media[i] = soma / 2;
	soma = 0;
	
	printf("\n");
}  

    printf("\n=== Exibindo dados === \n");
    for (i = 0; i < 3; i++) {
    	printf("%iº disciplina: %s \n", i+1, disciplinas[i]);
    	
    	for (j = 0; j < 2; j++) {
    		printf("%iª nota: %.1f \n", j+1, notas[i][j]);
		}
		
		printf("Média: %.1f \n", media[i]);
		printf("\n");
	}
    
	return 0;
}

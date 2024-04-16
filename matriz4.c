#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    
    int i, j;
    char alunos[4][200];
    float notas[4][3];
    float media[4], soma = 0;

	printf("=== Solicitando dados === \n");
    for (i = 0; i < 4; i++) {
    	printf("Digite o nome do %iº aluno: ", i+1);
		scanf("%s",&alunos[i]);
		
		for (j = 0; j < 3; j++) {
			printf("Digite a %iª nota: ", j+1);
			scanf("%f",&notas[i][j]);
			
			soma += notas[i][j];
		}

	media[i] = soma / 3;
	soma = 0;
	
	printf("\n");
}  

    printf("\n=== Exibindo dados === \n");
    for (i = 0; i < 2; i++) {
    	printf("%iº aluno: %s \n", i+1, alunos[i]);
    	
    	for (j = 0; j < 3; j++) {
    		printf("%iª nota: %.1f \n", j+1, notas[i][j]);
		}
		printf("Média: %.1f \n", media[i]);
		printf("\n");
	}
    
	return 0;
}

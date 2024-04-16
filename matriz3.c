#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    
    int i, j;
    char alunos[2][200];
    float notas[2][3];

	printf("=== Solicitando dados === \n");
    for (i = 0; i < 2; i++) {
    	printf("Digite o nome do %iº aluno: ", i+1);
		scanf("%s",&alunos[i]);
		
		for (j = 0; j < 3; j++) {
			printf("Digite a %iª nota: ", j+1);
			scanf("%f",&notas[i][j]);
		}
		
		printf("\n");
	}  

    printf("\n=== Exibindo dados === \n");
    for (i = 0; i < 2; i++) {
    	printf("%iº aluno: %s \n", i+1, alunos[i]);
    	
    	for (j = 0; j < 3; j++) {
    		printf("%iª nota: %.1f \n", j+1, notas[i][j]);
		}
		
		printf("\n");
	}
    
	return 0;
}

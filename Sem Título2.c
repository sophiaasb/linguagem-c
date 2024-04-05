#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>
#include <time.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int opcao, numeroFilhos, numeroFamilias;
	int maiorSalario = INT_MAX, menorSalario = INT_MIN;
	float salario, mediaSalario, mediaFilhos;
	
	do { 
	printf("=== MENU === \n");
	printf("1 - Adicionar fam�lia \n");
	printf("2 - Exibir resultados e sair \n");
	printf("Digite a op��o desejada: ");
	scanf("%i", &opcao);
	
	switch (opcao) {
		case 1: 
		printf("Digite o sal�rio: ");
		scanf("%i", &salario);
		
		fflush(stdin);
		printf("Digite o n�mero de filhos: ");
		scanf("%i", &numeroFilhos);
		
	    case 2:
	    	break;
	    default: 
	    printf("\nOp��o inv�lida! \n");
	    sleep(4);
	    system("cls || clear");
	    
   } 
} while (opcao != 2);

mediaSalario = somaSalario; 

printf("=== Exibindo resultados === \n");
printf("Total de fam�lias: %.2i \n", numeroFamilias);
printf("M�dia salarial: %.2f \n", mediaSalario);
printf("M�dia de filhos: %.2i \n", mediaFilhos);
printf("Maior sal�rio: %f \n", maiorSalario);
print("Menor sal�rio: %f \n", menorSalario);

return 0;

}

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>
#include <time.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int opcao, contadorSalario = 0, mulheres5k = 0;
	int idade, maiorIdade = INT_MIN, menorIdade = INT_MAX;
	float salario, somaSalario = 0, mediaSalario;
	char sexo;
	
	do { 
	printf("=== MENU === \n");
	printf("1 - Adicionar pessoa \n");
    printf("2 - Exibir resultado e sair \n");
    printf("Digite a opção desejada: ");
    scanf("%i", &opcao);
	
	switch (opcao) {
	    case 1:
		printf("Digite a idade: ");
	    scanf("%i", &idade);
	
	    fflush(stdin);
	    printf("Digite o sexo - M ou F: ");
	    scanf("%s", &sexo);
	
	    printf("Digite o salário: ");
	    scanf("%f", &salario);
	
	    sexo = toupper(sexo);
	
	    if (idade > maiorIdade) {
		    maiorIdade = idade;
	    }
	    
	    if (idade > menorIdade) {
		menorIdade = idade;
     	}
	
	    contadorSalario++;
	    somaSalario += salario;
	
	    if (sexo == 'F' && salario >= 5000) {
		    mulheres5k++;
	}
	
	      break;
	  case 2:
		  break;
	  default:
		 printf("\nOpção inválida \n");
		 sleep(4);
		 system("cls || clear");
		
        }
    } while (opcao != 2);

    mediaSalario = somaSalario / contadorSalario;  
   		
    printf("=== Exibindo resultados ===\n");
    printf("Média salarial do grupo: %.2f \n", mediaSalario);
    printf("Maior idade: %i \n", maiorIdade);
    printf("Menor idade: %i \n", menorIdade);
    printf("Quantidade de mulheres com salário acima de 5 mil: ", mulheres5k);
   		
    return 0;
   
}

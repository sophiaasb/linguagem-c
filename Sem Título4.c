#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
	setlocale(LC_ALL, "");
	system("cls");
    float notaUno, notaTwo, media, soma;
	
	do {	
		printf("Digite a 1� nota do aluno: ");
		scanf("%f",&notaUno);
		
		printf("Digite a 2� nota do aluno: ");
		scanf("%f",&notaTwo);
	} while (notaUno > 10 || notaUno < 0 || notaTwo > 10 || notaTwo < 0);
	
	soma = notaUno + notaTwo;
	media = soma / 2;
	printf("\n=== Exibindo M�dia ===\n");
	printf("M�dia: %.1f \n", media);
	
	return 0;
}

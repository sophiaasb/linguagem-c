#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	char nome[50];
	int idade;
	float notaUm, notaDois, notaTres, notaQuatro, media, resultado;
	
	printf("Digite o seu nome: ");
	scanf("%s",&nome); // fgets(nome, 50, stdin);
	
	printf("\nDigite sua idade: ");
	scanf("%d",&idade);
	
	printf("\nDigite a primeira nota: ");
	scanf("%f",&notaUm);
	
	printf("\nDigite a segunda nota: ");
	scanf("%f",&notaDois);
	
	printf("\nDigite a terceira nota: ");
	scanf("%f",&notaTres);
	
	printf("\nDigite a quarta nota: ");
	scanf("%f",&notaQuatro);
	
	media = (notaUm + notaDois + notaTres + notaQuatro) / 4;
	
	fflush(stdin);
	
	printf("\n=== Exibindo resultados ===\n");
	printf("\nNome: %s \n", nome);
	printf("\nIdade: %i \n", idade);
	printf("\nPrimeira nota: %.2f \n", notaUm);
	printf("\nSegunda nota: %.2f \n", notaDois);
	printf("\nTerceira nota: %.2f \n", notaTres);
	printf("\nQuarta nota: %.2f \n", notaQuatro);
	printf("\nMedia: %.2f \n", media);

    if (media >= 7) printf("\nVocê foi aprovado!");
    if (media < 7) printf("\nVocê foi reprovado!");
	
	return 0;
	
}

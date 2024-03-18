#include <stdio.h>

int main() {
	char nome
	int idade
	float notaUm, notaDois, notaTres, notaQuatro, media
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	
    printf("Digite a primeira nota: ");
    scanf("%f", &notaUm);
   
    printf("Digite a segunda nota: ");
    scanf("%f", &notaDois;
    
    printf("Digite a terceira nota: ");
    scanf("%f", &notaTres);
   
    printf("Digite a quarta nota: ");
    scanf("%f", &notaQuatro);
    
   media = notaUm + notaDois + notaTres + notaQuatro / 4
    
   fflush(stdin);
   
   printf("\n=== Exibindo reusltados ===\n");
   printf("Nome: %s \n", nome);
   printf("Idade: %i \n", idade);
   printf("Primeira nota: %f \n", notaUm);
   printf("Segunda nota: %f \n", notaDois);
   printf("Terceira nota: %f \n", notaTres);
   printf("Quarta nota: %f \n", notaQuatro);
   printf("Média: %f \n", media)
   
   getchar();
   
   return 0;
}

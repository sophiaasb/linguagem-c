#include <stdio.h>
#include <locale.h>

 int main() {
	setlocale(LC_ALL, "Portuguese");
	float quantidadeMaca, precoMaca, valorTotal;
	
	printf("=== PRE�OS ===");
	printf("\nat� 12 ma��s | R$ 1,30 cada");
    printf("\n12 ou mais ma��s | R$ 1,00 cada");
    printf("\nDigite a quantidade de ma�as que deseja comprar: ");
    scanf("%f",&quantidadeMaca);
    
    if (quantidadeMaca <= 12) {
    precoMaca = 1,30;
	} else {
	precoMaca = 1,00;
	}
	
	valorTotal = (quantidadeMaca * precoMaca);
    
    system("cls || clear"); 
   
   printf("\nQuantidade de ma��s: %f \n", quantidadeMaca);
   printf("Pre�o das ma��s: R$ %f \n", precoMaca);
   printf("Valor total a pagar: R$ %f \n", valorTotal);
   
   return 0;
}

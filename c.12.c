#include <stdio.h>
#include <locale.h>

 int main() {
	setlocale(LC_ALL, "Portuguese");
	float quantidadeMaca, precoMaca, valorTotal;
	
	printf("=== PREÇOS ===");
	printf("\naté 12 maçãs | R$ 1,30 cada");
    printf("\n12 ou mais maçãs | R$ 1,00 cada");
    printf("\nDigite a quantidade de maças que deseja comprar: ");
    scanf("%f",&quantidadeMaca);
    
    if (quantidadeMaca <= 12) {
    precoMaca = 1,30;
	} else {
	precoMaca = 1,00;
	}
	
	valorTotal = (quantidadeMaca * precoMaca);
    
    system("cls || clear"); 
   
   printf("\nQuantidade de maçãs: %f \n", quantidadeMaca);
   printf("Preço das maçãs: R$ %f \n", precoMaca);
   printf("Valor total a pagar: R$ %f \n", valorTotal);
   
   return 0;
}

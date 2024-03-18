#include <stdio.h>

int main() {
	int numero, antecessor, sucessor;
	
	printf("Digite um numero: ");
	scanf("%i", &numero);
	
	antecessor = numero - 1;
	sucessor = numero + 1;
	
	system("cls || clear");
	
	fflush(stdin);
   
   printf("\n=== Exibindo resultados ===\n");
   printf("\nNumero: %i \n", numero);
   printf("\nAntecessor: %i \n", antecessor);
   printf("\nSucessor: %i \n", sucessor);
 
   getchar();
   
   return 0;
   
}

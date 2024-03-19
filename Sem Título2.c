#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	char loginSalvo[200] = "sophiaasb";
	char senhaSalva[200] = "2909";
	char login[200];
	char senha[200];
	
	printf("Digite o seu login: ");
	scanf("%s",&login);
	
	printf("Digite a sua senha: ");
	scanf("%s",&senha);
	
	if (strcmp(login, loginSalvo) == 0 && strcmp(senha, senhaSalva) == 0) {
    	printf("\nBem-vindo(a)!");
	} else { 
    	printf("\nAcesso negado.");
    }
	
	return 0;
	
}

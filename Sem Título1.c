#include <stdio.h>
#include <locale.h>

float nota, soma = 0, media;
int contador = 0;
char resposta;

do {
printf("Digite uma nota: ");
scanf("%f",&nota);

fflush(st)
public int _cdecl fflush (FILE *_ File)
printf("Deseja inserir mais ua nota:
scanf("%c",&resposta);
resposta = toupper(resposta);

soma += nota;
contador++;

} while(resposta != 'N');

media = soma / contador;

printf("\n === Exibindo resultados === \n");
printf("M�dia: %.1f \n", media);

return 0;

}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "agenda.h"

int main ()
{
	int select;
	char input [20];
	struct Contato ctt;

	// loop
	while(1)
	{
		system("clear");
		printf("\t\tMy Agenda\n\n");
		printf("1: Pesquisar\n");
		printf("2: Novo Contato\n");

		scanf("%i", &select);
		switch(select)
		{
			case 1:
				system("clear");
				printf("\t\tBuscar contato:\n\n");
				printf("Nome: ");
				scanf("%s",input);
				//pesquisar na agenda e rtoranr resultados
			break;

			case 2:
				system("clear");
				printf("\t\tAdicionar contato:\n\n");
				
				printf("nome: ");
				scanf("%s",ctt.nome);
				
				
				printf("telefone: ");
				scanf("%s",ctt.telefone);
				
				printf("email: ");
				scanf("%s",ctt.email);

				// Adicionar contato
			break;
				

		}

	}
	return 0;
}
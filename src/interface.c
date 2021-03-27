#include "Personagem.h"


struct Personagem_Mundo Mpers;

	
int main()
{
	int opc = 0;

	
	while(opc != 9)
	{

	printf("1. menu\n");
	printf("9. encerrar\n");
	scanf("%d",&opc);
	if(opc == 1)
	{
		printf("1. status\n");
		printf("2. visao\n");
		printf("3. andar\n");

		scanf("%d",&opc);

		if(opc == 1)
		{
			printf("STATUS\n\n");
			Personagem_Status(Mpers);			
		}
		else
		if(opc == 2)
		{
		}
		else
		if(opc == 3)
		{

	
		}
		else
		{
			printf("Opcao Invalida\n");
		}
	}
	else
	if(opc == 9)
	{
		printf("Saindo...\n");
	}
	else
	{
		printf("Opcao Invalida\n");
	}

	}
	
	return 0;
}

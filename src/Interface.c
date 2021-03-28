#include "Personagem.h"

struct Personagem_Mundo InterAndaCorre(struct Personagem_Mundo Mpers);
	
int main()
{



	int opc = 0;
	
	struct Personagem_Mundo Mpers;
	Mpers = Personagem_Inicializacao(1, 10, 10, 50);
	
	while(opc != 9)
	{
		printf("1. menu\n");
		printf("9. encerrar\n");
		printf("\n\n> ");
		scanf("%d",&opc);
		if(opc == 1)
		{
			printf("1. status\n");
			printf("2. visao\n");
			printf("3. andar\n");
			printf("\n\n> ");
			scanf("%d",&opc);
			if(opc == 1)
			{
				printf("STATUS\n\n");
				Personagem_Status(Mpers);
				printf("\n\n");			
			}
			else
			if(opc == 2)
			{
				printf("VISAO\n\n");
			}
			else
			if(opc == 3)
			{
				printf("ANDAR\n\n");	
				Mpers = InterAndaCorre(Mpers);
			}
			else
			{
				printf("Opcao Invalida\n");
				printf("\n\n");
				opc = 0;
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
			printf("\n\n");
		}
	}
	
	return 0;
}

struct Personagem_Mundo InterAndaCorre(struct Personagem_Mundo Mpers)
{
	char getKbd = 't';
	int opcKbd = 0;

	struct Keyboard MKbd;
	MKbd = Kbd_Inicializacao(MKbd);
	
	while(opcKbd != 9999)
	{
		if(getKbd != 10)
		{
			printf(">> ");
		}
		getKbd = getchar();
		if((getKbd == 'W') || (getKbd == 'w'))
		{
			MKbd.teclaWPressionada = 1;
			opcKbd = 2;
		}
		if((getKbd == 'S') || (getKbd == 's'))
		{
			MKbd.teclaSPressionada = 1;
			opcKbd = 2;
		}
		if((getKbd == 'A') || (getKbd == 'a'))
		{
			MKbd.teclaAPressionada = 1;
			opcKbd = 1;
		}
		if((getKbd == 'D') || (getKbd == 'd'))
		{
			MKbd.teclaDPressionada = 1;
			opcKbd = 1;
		}
		if(getKbd != 10)
		{
			if(Mpers.personagemAndaX == 0)
			{
				printf("FIM DO MAPA, retorne pra direita, Norte, Sul\n");
				Mpers.personagemAndaX++;
			} 
			if(Mpers.personagemAndaX == 99)
			{
				printf("FIM DO MAPA, retorne pra esquerda, Norte, Sul\n");
				Mpers.personagemAndaX--;
			}
			if(Mpers.personagemAndaY == 0)
			{
				printf("FIM DO MAPA, retorne pra Norte, direita, esquerda\n");
				Mpers.personagemAndaY++;
			} 
			if(Mpers.personagemAndaY == 99)
			{
				printf("FIM DO MAPA, retorne pra Sul, direita, esquerda\n");
				Mpers.personagemAndaY--;
			}
			if(Mpers.personagemAndaZ == 0)
			{
				printf("FIM DO MAPA, Tem que Subir ou Andar\n");
				Mpers.personagemAndaZ++;
			}
			if(Mpers.personagemAndaZ == 99)
			{
				printf("FIM DO MAPA, Tem que Descer ou Andar\n");
				Mpers.personagemAndaZ--;
			}  
			Mpers = AndaCorre(MKbd, Mpers);
//			Personagem_Status(Mpers);
			Personagem_Localizacao(Mpers);
			MKbd = Kbd_Inicializacao(MKbd);
			printf("\n\n");
		}
		if(getKbd == '1')
			opcKbd = 9999;
	}
	return Mpers;
}

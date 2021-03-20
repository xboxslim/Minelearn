//Minecraft Automation
// Criando Itens

#include <stdio.h>
struct Item_Mundo
{
	int itens;
	int itensId;
	int itensNome;	
};

struct Item_Mundo Item_Inicializacao(int fID, int Nome);
void Item_Status(struct Item_Mundo Item1);

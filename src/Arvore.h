//Minecraft Automation
//criando Arvores

#include <stdio.h>
//-----------------------------/
//Variaveis


struct Arvores_Mundo
{
	int arvore;
	int arvoreSemente;
	int arvoreFolha;
	int arvoreMadeira;
	int arvoreLocX;
	int arvoreLocY;
	int arvoreLocZ;
	int arvoreNome;
	int arvoreId;	
};

struct Arvores_Mundo Arvore_Inicializacao(int fID, int Nome, int fx, int fy, int fz);
void Arvore_Status(struct Arvores_Mundo farvor);



//Minecraft Automation
//criando Arvores

#include "Arvore.h"
//-----------------------------/
//Variaveis

char db_Arvores_Mundo[][20]=
{
	"Carvalho",
	"Macieira",
	"Pinheiro",
	"Cedro" 
};

int tam_db_Arvores_Mundo = ((sizeof db_Arvores_Mundo)/20);

struct Arvores_Mundo Arvore_Inicializacao(int fID, int Nome, int fx, int fy, int fz)
{
	struct Arvores_Mundo farvor;
	farvor.arvoreId = fID;
	farvor.arvoreSemente = 2;
	farvor.arvoreFolha = 15;
	farvor.arvoreMadeira = 8;
	if((Nome <= 0) || (Nome > tam_db_Arvores_Mundo))
		printf("Numero Invalido\n");
	else
		farvor.arvoreNome = Nome;
	farvor.arvoreLocX = fx;
	farvor.arvoreLocY = fy;
	farvor.arvoreLocZ = fz;
	
	
	return farvor;
}

void Arvore_Status(struct Arvores_Mundo farvor)
{
	printf("Arvore ID = %d\n",farvor.arvoreId);
	printf("Arvore Semente = %d\n",farvor.arvoreSemente);
	printf("Arvore Folha = %d\n",farvor.arvoreFolha);
	printf("Arvore Madeira = %d\n",farvor.arvoreMadeira);
	if((farvor.arvoreNome <= 0) || (farvor.arvoreNome > tam_db_Arvores_Mundo))
		printf("Numero Invalido\n");
	else
		printf("Arvore Nome = %s\n",db_Arvores_Mundo[farvor.arvoreNome-1]);
	printf("Arvore (x) = %d\n",farvor.arvoreLocX);
	printf("Arvore (y) = %d\n",farvor.arvoreLocY);
	printf("Arvore (z) = %d\n",farvor.arvoreLocZ);		
	printf("tamanho do banco de dados Arvores = %d\n",tam_db_Arvores_Mundo);	
}



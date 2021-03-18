//Minecraft Automation
//criando Arvores

#include <stdio.h>
//-----------------------------/
//Variaveis

char db_Arvores_Mundo[][20]=
{"Carvalho",
 "Macieira",
 "Pinheiro",
 "Cedro"
};

int tam_db_Arvores_Mundo = ((sizeof db_Arvores_Mundo)/20);

struct Arvores_Mundo
{
	int arvore;
	int arvoreSemente;
	int arvoreFolha;
	int arvoreMadeira;
	int arvoreNome;
	int arvoreId;	
}arvor;

struct Arvores_Mundo Arvore_Inicializacao(int fID,int Nome)
{
	struct Arvores_Mundo farvor;
	farvor.arvoreId = fID;
	farvor.arvoreSemente = 2;
	farvor.arvoreFolha = 15;
	farvor.arvoreMadeira = 8;
	farvor.arvoreNome = Nome;
	return farvor;
}

void Arvore_Status(struct Arvores_Mundo farvor)
{
	printf("Arvore ID = %d\n",farvor.arvoreId);
	printf("Arvore Semente = %d\n",farvor.arvoreSemente);
	printf("Arvore Folha = %d\n",farvor.arvoreFolha);
	printf("Arvore Madeira = %d\n",farvor.arvoreMadeira);
	printf("Arvore Nome = %s\n",db_Arvores_Mundo[farvor.arvoreNome-1]);
	printf("tamanho do banco de dados Arvores = %d\n",tam_db_Arvores_Mundo);	
}



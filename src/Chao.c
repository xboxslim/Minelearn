//Minecraft Automation
//criando chão

#include "Chao.h"

//-----------------------------//
//Variaveis

char db_Chao_Mundo[][20]=
{
	"Ar",
	"Terra",
	"Água",
	"Gelo",
	"Areia_Amarela",
	"Cascalho",
	"Rocha",
	"RochaCCarvao",
	"RochaCFerro",
	"Marmore",
	"Granizo",
};

int tam_db_Chao_Mundo = ((sizeof db_Chao_Mundo)/20);

struct Chao_Mundo Chao_Inicializacao(int fID, int fEstado, int Nome)
{
	struct Chao_Mundo Chao1;
	Chao1.chaoId = fID;
	if((fEstado < 0) || (fEstado > 2))
		printf("Numero Invalido\n");
	else
		Chao1.chaoEstadoFisico = fEstado;
	if((Nome <= 0) || (Nome > tam_db_Chao_Mundo))
		printf("Numero Invalido\n");
	else
		Chao1.chaoNomes = Nome;
	return Chao1;
}

void Chao_Status(struct Chao_Mundo Chao1)
{
	printf("Chao ID = %d\n",Chao1.chaoId);
	if(Chao1.chaoEstadoFisico == 0){
		printf("Chao Estado Fisico = Solido\n");
	}
	if(Chao1.chaoEstadoFisico == 1){
		printf("Chao Estado Fisico = Liquido\n");
	}
	if(Chao1.chaoEstadoFisico == 2){
		printf("Chao Estado Fisico = Gasoso\n");
	}
	
	if((Chao1.chaoNomes <= 0) || (Chao1.chaoNomes > tam_db_Chao_Mundo))
		printf("Numero Invalido\n");
	else
		printf("Chao Nome = %s\n",db_Chao_Mundo[Chao1.chaoNomes-1]);
	printf("tamanho do banco de dados Chao = %d\n",tam_db_Chao_Mundo);	
}

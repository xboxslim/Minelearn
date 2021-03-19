//Minecraft Automation
//criando chão

#include <stdio.h>

struct Chao_Mundo
{
	int chao;
	int chaoEstadoFisico;
	int chaoNomes;
	int chaoId;	
};

struct Chao_Mundo Chao_Inicializacao(int fID, int fEstado, int Nome);
void Chao_Status(struct Chao_Mundo Chao1);


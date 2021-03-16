//Minecraft Automation
//criando chão

#include <stdio.h>

//-----------------------------//
//Variaveis

int chao;
int chaoEstadoFisico;
int chaoNomes;
int chaoId;


//-----------------------------//

int main(){

//ação

chaoId=1;

chaoEstadoFisico=0; // 0 - sólido
chaoEstadoFisico=1; // 1 - líquido
chaoEstadoFisico=2; // 2 - gasoso

// tem que ser criado um banco de nomes

chaoNomes=1;
chaoNomes=2;
chaoNomes=3;
/*

Ar
Terra
Água
Gelo
Areia_Amarela
Cascalho
Rocha
RochaCCarvao
RochaCFerro
Marmore
Granizo
...

*/
	printf("Chao ID = %d\n",chaoId);
	if(chaoEstadoFisico == 1){
		printf("Chao Estado Fisico = Solido\n");
	}
	if(chaoEstadoFisico == 2){
		printf("Chao Estado Fisico = Liquido\n");
	}
	if(chaoEstadoFisico == 3){
		printf("Chao Estado Fisico = Gasoso\n");
	}
			
	if(chaoNomes == 1){
		printf("Chao Nome = Ar\n");
	}
	if(chaoNomes == 2){
		printf("Chao Nome = Terra\n");
	}
	if(chaoNomes == 3){
		printf("Chao Nome = Agua\n");
	}


return 0;
}


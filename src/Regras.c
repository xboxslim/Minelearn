//Minecraft Automation
//criando Regras do Jogo
//------------------------------//

#include "Arvores.h"
#include "Chao.h"
#include "Mobs.h"
#include "Personagem.h"

//-----------------------------//
//Variaveis
int mapa[100][100][100];

//-----------------------------//

int main(){
//ação
/*
* Personagem nasce aleatoriamente no mundo
* mundo inicial será na floresta com um tipo de arvore
* os mobs serão mobs passivos. Carneiro, Bois e Porcos
* mundo inicial terar o tamanho de 100 blocos de norte a sul, 100 blocos de leste a oeste, 100 blocos metade Ar e metade Terra
*/

struct Chao_Mundo Mchao;
Mchao = Chao_Inicializacao(1,0,2);

for(int x = 0; x < 100; x++)
	for(int y = 0; y < 100; y++)
		mapa[x][y][50]=Mchao.chaoNomes;


personagem.id=1;
Personagem.localizacao=mapa[1][1][50];

mobs.id=1;
mobs.nome=1;
mobs.humor=1; // 1 = passivo
mobs.ataque=0;
mobs.localizacao=mapa[5][1][50];

arvore.id=1;
arvore.semente=1;
arvore.folha=1;
arvore.madeira=3;
arvore.nome=1;
arvore.localizacao=mapa[3][1][50];

arvore.id=2;
arvore.semente=1;
arvore.folha=1;
arvore.madeira=3;
arvore.nome=1;
arvore.localizacao=mapa[12][1][50];

// movimentação

mobs.id=1;
mobs.anda.x=6;
mobs.anda.y=1;
mobs.anda.z=50;

personagem.id=1;
personagem.anda.x=2;
personagem.anda.y=1;
personagem.anda.z=50;
personagem.anda.x=3;
personagem.anda.y=1;
personagem.anda.z=50;
	return 0;
}

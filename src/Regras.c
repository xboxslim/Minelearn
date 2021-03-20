//Minecraft Automation
//criando Regras do Jogo
//------------------------------//

#include "Arvore.h"
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
struct Personagem_Mundo Mpers;
struct Mobs_Mundo Mmobs;
struct Arvores_Mundo Marvo,Marvo1;
Mchao = Chao_Inicializacao(1,0,2);
Mpers = Personagem_Inicializacao(1,1,1,50);
Mmobs = Mobs_Inicializacao(1,1,1,5,1,50);
Marvo = Arvore_Inicializacao(1,1,3,1,50);
Marvo1 = Arvore_Inicializacao(2,1,12,1,50);

for(int y = 0; y < 100; y++)
	for(int x = 0; x < 100; x++)
		mapa[x][y][50]=Mchao.chaoNomes;


// movimentação
PrintMobs(1);
printf(" esta andando para o leste\n");
Mmobs.mobsAndaX++;
Mobs_Status(Mmobs);
PrintMobs(1);
printf(" esta andando para o leste\n");
Mmobs.mobsAndaX++;
Mobs_Status(Mmobs);
PrintMobs(1);
printf(" esta andando para o leste\n");
Mmobs.mobsAndaX++;
Mobs_Status(Mmobs);


AndaCorre();

/*


personagem.id=1;
personagem.anda.x=2;
personagem.anda.y=1;
personagem.anda.z=50;
personagem.anda.x=3;
personagem.anda.y=1;
personagem.anda.z=50;
*/
	return 0;
}

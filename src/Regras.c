//Minecraft Automation
//criando Regras do Jogo
//------------------------------//

#include <stdio.h>

// includes
Chao.algoritms
Mobs.algoritms
Personagem.algoritms
Arvore.algoritms

//-----------------------------//
//Variaveis
mapa

//-----------------------------//

int main(){
//ação
/*
* Personagem nasce aleatoriamente no mundo
* mundo inicial será na floresta com um tipo de arvore
* os mobs serão mobs passivos. Carneiro, Bois e Porcos
* mundo inicial terar o tamanho de 100 blocos de norte a sul, 100 blocos de leste a oeste, 100 blocos metade Ar e metade Terra
*/

mapa[1][1][50]=chao.nomes=2;
mapa[2][1][50]=chao.nomes=2;
mapa[3][1][50]=chao.nomes=2;
mapa[4][1][50]=chao.nomes=2;
mapa[5][1][50]=chao.nomes=2;
mapa[6][1][50]=chao.nomes=2;
mapa[7][1][50]=chao.nomes=2;
mapa[8][1][50]=chao.nomes=2;
mapa[9][1][50]=chao.nomes=2;
mapa[10][1][50]=chao.nomes=2;
//...
mapa[90][1][50]=chao.nomes=2;
mapa[91][1][50]=chao.nomes=2;
mapa[92][1][50]=chao.nomes=2;
mapa[93][1][50]=chao.nomes=2;
mapa[94][1][50]=chao.nomes=2;
mapa[95][1][50]=chao.nomes=2;
mapa[96][1][50]=chao.nomes=2;
mapa[97][1][50]=chao.nomes=2;
mapa[98][1][50]=chao.nomes=2;
mapa[99][1][50]=chao.nomes=2;
//...
mapa[90][99][50]=chao.nomes=2;
mapa[91][99][50]=chao.nomes=2;
mapa[92][99][50]=chao.nomes=2;
mapa[93][99][50]=chao.nomes=2;
mapa[94][99][50]=chao.nomes=2;
mapa[95][99][50]=chao.nomes=2;
mapa[96][99][50]=chao.nomes=2;
mapa[97][99][50]=chao.nomes=2;
mapa[98][99][50]=chao.nomes=2;
mapa[99][99][50]=chao.nomes=2;

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

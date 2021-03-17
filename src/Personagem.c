//Minecraft Automation
//criando Personagem

#include <stdio.h>
//-----------------------------//
//Variaveis

int personagem;

int personagemId;
int personagemAnda;
int personagemAndaX;
int personagemAndaY;
int personagemAndaZ;

int personagemCorre;
int personagemPula;
int personagemVida;

int personagemLevel;
int personagemLevelExperiencia;

int personagemAtaca;
int personagemAtacaDano;

int personagemCorpo;

int personagemIventorio;
int personagemIventorioItem;
int personagemIventorioEspaco;
int personagemIventorioQtd;

int tecla;
int teclaD;
int teclaDPressionada;
int teclaDSolta;
int teclaA;
int teclaAPressionada;
int teclaASolta;
int teclaW;
int teclaWPressionada;
int teclaWSolta;
int teclaS;
int teclaSPressionada;
int teclaSSolta;
int teclaEspaco;
int teclaEspacoPressionada;
int teclaEspacoSolta;

int mouse;
int mouseBotao;
int mouseBotaoDireito;
int mouseBotaoDireitoPressionada;
int mouseBotaoDireitoSolta;


//-----------------------------//

int main(){
//ação

teclaAPressionada=0;
teclaASolta=0;
teclaDPressionada=1;
teclaDSolta=0;
teclaWPressionada=0;
teclaWSolta=0;
teclaSPressionada=0;
teclaSSolta=0;

personagemId=1;

personagemAndaX=1;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=2;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=3;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=4;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=5;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=6;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=7;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=8;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=9;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=10;
personagemAndaY=1;
personagemAndaZ=0;

teclaAPressionada=0;
teclaASolta=0;
teclaDPressionada=0;
teclaDSolta=1;
teclaWPressionada=0;
teclaWSolta=0;
teclaSPressionada=0;
teclaSSolta=0;

personagemAndaX=10;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=10;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=10;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=10;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=10;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=10;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=10;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=10;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=10;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=10;
personagemAndaY=1;
personagemAndaZ=0;

teclaAPressionada=1;
teclaASolta=0;
teclaDPressionada=0;
teclaDSolta=1;
teclaWPressionada=0;
teclaWSolta=0;
teclaSPressionada=0;
teclaSSolta=0;

personagemAndaX=9;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=8;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=7;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=6;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=5;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=4;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=3;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=2;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=1;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;

teclaAPressionada=0;
teclaASolta=1;
teclaDPressionada=0;
teclaDSolta=1;
teclaWPressionada=0;
teclaWSolta=0;
teclaSPressionada=0;
teclaSSolta=0;

personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;

teclaAPressionada=0;
teclaASolta=1;
teclaDPressionada=0;
teclaDSolta=1;
teclaWPressionada=1;
teclaWSolta=0;
teclaSPressionada=0;
teclaSSolta=0;

personagemAndaX=0;
personagemAndaY=2;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=3;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=4;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=5;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=6;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=7;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=8;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=9;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=10;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=11;
personagemAndaZ=0;

teclaAPressionada=0;
teclaASolta=1;
teclaDPressionada=0;
teclaDSolta=1;
teclaWPressionada=0;
teclaWSolta=1;
teclaSPressionada=0;
teclaSSolta=0;

personagemAndaX=0;
personagemAndaY=11;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=11;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=11;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=11;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=11;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=11;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=11;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=11;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=11;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=11;
personagemAndaZ=0;

teclaAPressionada=0;
teclaASolta=1;
teclaDPressionada=0;
teclaDSolta=1;
teclaWPressionada=0;
teclaWSolta=1;
teclaSPressionada=1;
teclaSSolta=0;

personagemAndaX=0;
personagemAndaY=10;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=9;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=8;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=7;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=6;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=5;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=4;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=3;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=2;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;

teclaAPressionada=0;
teclaASolta=1;
teclaDPressionada=0;
teclaDSolta=1;
teclaWPressionada=0;
teclaWSolta=1;
teclaSPressionada=0;
teclaSSolta=1;

personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;

// correr

personagemCorre=1;

teclaAPressionada=0;
teclaASolta=1;
teclaDPressionada=1;
teclaDSolta=0;
teclaWPressionada=0;
teclaWSolta=1;
teclaSPressionada=0;
teclaSSolta=1;

personagemAndaX=3;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=6;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=9;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=12;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=15;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=18;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=21;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=24;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=27;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=30;
personagemAndaY=1;
personagemAndaZ=0;

teclaAPressionada=0;
teclaASolta=1;
teclaDPressionada=0;
teclaDSolta=1;
teclaWPressionada=0;
teclaWSolta=1;
teclaSPressionada=0;
teclaSSolta=1;

personagemAndaX=30;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=30;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=30;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=30;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=30;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=30;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=30;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=30;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=30;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=30;
personagemAndaY=1;
personagemAndaZ=0;

teclaAPressionada=1;
teclaASolta=0;
teclaDPressionada=0;
teclaDSolta=1;
teclaWPressionada=0;
teclaWSolta=1;
teclaSPressionada=0;
teclaSSolta=1;

personagemAndaX=27;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=24;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=21;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=18;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=15;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=12;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=9;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=6;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=3;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;

teclaAPressionada=0;
teclaASolta=1;
teclaDPressionada=0;
teclaDSolta=1;
teclaWPressionada=0;
teclaWSolta=1;
teclaSPressionada=0;
teclaSSolta=1;

personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;

teclaAPressionada=0;
teclaASolta=1;
teclaDPressionada=0;
teclaDSolta=1;
teclaWPressionada=1;
teclaWSolta=0;
teclaSPressionada=0;
teclaSSolta=1;

personagemAndaX=0;
personagemAndaY=4;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=7;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=10;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=13;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=16;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=19;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=22;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=25;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=28;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=31;
personagemAndaZ=0;

teclaAPressionada=0;
teclaASolta=1;
teclaDPressionada=0;
teclaDSolta=1;
teclaWPressionada=0;
teclaWSolta=1;
teclaSPressionada=0;
teclaSSolta=1;

personagemAndaX=0;
personagemAndaY=31;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=31;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=31;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=31;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=31;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=31;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=31;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=31;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=31;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=31;
personagemAndaZ=0;

teclaAPressionada=0;
teclaASolta=1;
teclaDPressionada=0;
teclaDSolta=1;
teclaWPressionada=0;
teclaWSolta=1;
teclaSPressionada=1;
teclaSSolta=0;

personagemAndaX=0;
personagemAndaY=28;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=25;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=22;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=19;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=16;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=13;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=10;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=7;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=4;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;

teclaAPressionada=0;
teclaASolta=1;
teclaDPressionada=0;
teclaDSolta=1;
teclaWPressionada=0;
teclaWSolta=1;
teclaSPressionada=0;
teclaSSolta=1;

personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;
personagemAndaX=0;
personagemAndaY=1;
personagemAndaZ=0;

// PULAR 

teclaEspacoPressionada=1;
teclaEspacoSolta=0;

personagemPula=1;
personagemAndaZ=1;
personagemAndaZ=0;
personagemPula=0;

teclaEspacoPressionada=0;
teclaEspacoSolta=1;

// VIDA

personagemVida=100;

//Sofrendo Danos

personagemVida=90;
personagemVida=80;
personagemVida=70;
personagemVida=60;
personagemVida=50;
personagemVida=40;
personagemVida=30;
personagemVida=20;
personagemVida=10;

// MORTO
personagemVida=0;

// NASCENDO OUTRA VEZ

personagemVida=100;

// Nivel
/*
	Formula do lvl
	novo lvl = antigo lvl + antigo lvl + (50% antigo lvl)
	
	lvl 1 = 1
	lvl 2 = 3
	lvl 3 = 8
	lvl 4 = 20
	lvl 5 = 50
	...
*/

personagemLevel=1;
personagemLevelExperiencia=0;
personagemLevelExperiencia=1;

personagemLevel=2;
personagemLevelExperiencia=0;
personagemLevelExperiencia=1;
personagemLevelExperiencia=2;
personagemLevelExperiencia=3;

personagemLevel=3;
personagemLevelExperiencia=0;
personagemLevelExperiencia=1;
personagemLevelExperiencia=5;
personagemLevelExperiencia=8;

personagemLevel=4;
personagemLevelExperiencia=0;
personagemLevelExperiencia=1;
personagemLevelExperiencia=15;
personagemLevelExperiencia=20;

personagemLevel=5;
personagemLevelExperiencia=0;
personagemLevelExperiencia=20;
personagemLevelExperiencia=30;
personagemLevelExperiencia=50;

//...

//ATACA

mouseBotaoDireitoPressionada=1;
mouseBotaoDireitoSolta=0;
personagemAtaca=1;
personagemAtacaDano=1;

mouseBotaoDireitoPressionada=0;
mouseBotaoDireitoSolta=1;
personagemAtaca=0;
personagemAtacaDano=1;

//Armadura

/*
	Reduz o dano recebido do Monstro
	
*/
personagemCorpo=30;

//diminui a cada 5 danos recebido

personagemCorpo=29;
personagemCorpo=28;
personagemCorpo=27;
personagemCorpo=26;
personagemCorpo=25;
personagemCorpo=24;

//...

//IVENTORIO

personagemIventorio=30;
personagemIventorioItem=1;
personagemIventorioQtd=1;
personagemIventorioEspaco=1;
personagemIventorioItem=2;
personagemIventorioQtd=6;
personagemIventorioEspaco=2;
personagemIventorioItem=0; // 0 = Sem Item no espaco selecionado
personagemIventorioQtd=0;
personagemIventorioEspaco=3;


printf("Personagem ID = %d\n",personagemId);
printf("Personagem Anda X = %d\n",personagemAndaX);
printf("Personagem Anda Y = %d\n",personagemAndaY);
printf("Personagem Anda Z = %d\n",personagemAndaZ);

printf("Tecla A Pressionada = %d\n",teclaAPressionada);
printf("Tecla A Solta = %d\n",teclaASolta);
printf("Tecla D Pressionada = %d\n",teclaDPressionada);
printf("Tecla D Solta = %d\n",teclaDSolta);
printf("Tecla W Pressionada = %d\n",teclaWPressionada);
printf("Tecla W Solta = %d\n",teclaWSolta);
printf("Tecla S Pressionada = %d\n",teclaSPressionada);
printf("Tecla S Solta = %d\n",teclaSSolta);

printf("Personagem Corre = %d\n",personagemCorre);

printf("Tecla Espaco Pressionada = %d\n",teclaEspacoPressionada);
printf("Tecla Espaco Solta = %d\n",teclaEspacoSolta);
printf("Personagem Pula = %d\n",personagemPula);
printf("Personagem Vida = %d\n",personagemVida);
printf("Personagem Nivel = %d\n",personagemLevel);
printf("Personagem Experiencia = %d\n",personagemLevelExperiencia);
printf("Mouse Botao Direito Pressionado = %d\n",mouseBotaoDireitoPressionada);
printf("Mouse Botao Direito Solto = %d\n",mouseBotaoDireitoSolta);
printf("Personagem Ataca = %d\n",personagemAtaca);
printf("Personagem Ataca Dano = %d\n",personagemAtacaDano);
printf("Personagem Armadura = %d\n",personagemCorpo);
printf("Iventorio = %d\n",personagemIventorio);
printf("Iventorio Item = %d\n",personagemIventorioItem);
printf("Iventorio Item Qtd = %d\n",personagemIventorioQtd);
printf("Iventorio Item Espaco = %d\n",personagemIventorioEspaco);


	return 0;
}






















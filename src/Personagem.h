//Minecraft Automation
//criando Personagem

#include <stdio.h>

struct Personagem_Mundo
{
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
};

struct Keyboard
{
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
	int teclaShiftPressionada;
	int teclaShiftSolta;
};

struct Mouse
{
	int mouse;
	int mouseBotao;
	int mouseBotaoDireito;
	int mouseBotaoDireitoPressionada;
	int mouseBotaoDireitoSolta;
};

struct Personagem_Mundo Personagem_Inicializacao(int fID, int fx, int fy, int fz);
void Personagem_Status(struct Personagem_Mundo Pers1);


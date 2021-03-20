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
	int teclaDPressionada;
	int teclaDSolta;
	int teclaAPressionada;
	int teclaASolta;
	int teclaWPressionada;
	int teclaWSolta;
	int teclaSPressionada;
	int teclaSSolta;
	int teclaEspacoPressionada;
	int teclaEspacoSolta;
	int teclaShiftPressionada;
	int teclaShiftSolta;
};

struct Mouse
{
	int mouseBotaoDireito;
	int mouseBotaoDireitoPressionada;
	int mouseBotaoDireitoSolta;
};

struct Personagem_Mundo Personagem_Inicializacao(int fID, int fx, int fy, int fz);
struct Keyboard Kbd_Inicializacao(struct Keyboard Kbd);
void Personagem_Status(struct Personagem_Mundo Pers1);
int AndaCorre(struct Keyboard tcl, struct Personagem_Mundo Pers1, int xyz_return);

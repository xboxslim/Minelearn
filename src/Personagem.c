//Minecraft Automation
//criando Personagem

#include "Personagem.h"
//-----------------------------//

//Variaveis


struct Personagem_Mundo Personagem_Inicializacao(int fID, int fx, int fy, int fz)
{
	struct Personagem_Mundo Pers1;
	Pers1.personagemId = fID;
	Pers1.personagemVida=100;
	Pers1.personagemLevel=1;	
	Pers1.personagemLevelExperiencia=0;
	Pers1.personagemCorpo=0;
	Pers1.personagemIventorio=30;
	Pers1.personagemIventorioItem=0;
	Pers1.personagemIventorioQtd=0;
	Pers1.personagemAtaca=0;
	Pers1.personagemAtacaDano=1;	
	Pers1.personagemPula=0;
	Pers1.personagemCorre=0;
	Pers1.personagemAndaX = fx;
	Pers1.personagemAndaY = fy;
	Pers1.personagemAndaZ = fz;
		
	return Pers1;
}

void Personagem_Status(struct Personagem_Mundo Pers1)
{
	printf("Personagem ID = %d\n",Pers1.personagemId);
	printf("Personagem Vida = %d\n",Pers1.personagemVida);
	printf("Personagem Level = %d\n",Pers1.personagemLevel);
	printf("Personagem Experiencia = %d\n",Pers1.personagemLevelExperiencia);
	printf("Personagem Armadura = %d\n",Pers1.personagemCorpo);
	printf("Personagem Iventorio = %d\n",Pers1.personagemIventorio);
	printf("Personagem Ataca = %d\n",Pers1.personagemAtaca);
	printf("Personagem Dano de Atq = %d\n",Pers1.personagemAtacaDano);	
	printf("Personagem Pulo = %d\n",Pers1.personagemPula);
	printf("Personagem Velocidade = %d\n",Pers1.personagemCorre);
	printf("Personagem (x) = %d\n",Pers1.personagemAndaX);
	printf("Personagem (y) = %d\n",Pers1.personagemAndaY);
	printf("Personagem (z) = %d\n",Pers1.personagemAndaZ);		
}

struct Keyboard Kbd_Inicializacao(struct Keyboard Kbd)
{	
	Kbd.teclaDPressionada = 0;
	Kbd.teclaDSolta = 0;
	Kbd.teclaAPressionada = 0;
	Kbd.teclaASolta = 0;
	Kbd.teclaWPressionada = 0;
	Kbd.teclaWSolta = 0;
	Kbd.teclaSPressionada = 0;
	Kbd.teclaSSolta = 0;
	Kbd.teclaEspacoPressionada = 0;
	Kbd.teclaEspacoSolta = 0;
	Kbd.teclaShiftPressionada = 0;
	Kbd.teclaShiftSolta = 0;
	
	return Kbd;
}

struct Personagem_Mundo AndaCorre(struct Keyboard tcl, struct Personagem_Mundo Pers1)
{		
	if(tcl.teclaEspacoPressionada == 1)
	{
		tcl.teclaEspacoSolta=0;
		Pers1.personagemPula=1;
		Pers1.personagemAndaZ++;
	}
	if(tcl.teclaEspacoPressionada == 0)
	{
		tcl.teclaEspacoSolta=1;
		
		if(Pers1.personagemPula == 1)
		{
			Pers1.personagemAndaZ--;
			Pers1.personagemPula=0;
		}
	}
	
	
	
	if(tcl.teclaShiftPressionada == 1)
	{
		tcl.teclaShiftSolta = 0;
		Pers1.personagemCorre=1;
	
		if(tcl.teclaDPressionada == 1)
		{
			tcl.teclaWSolta=1;
			tcl.teclaASolta=1;
			tcl.teclaSSolta=1;
			tcl.teclaDSolta=0;
			Pers1.personagemAndaX+=2;
		}
		if(tcl.teclaAPressionada == 1)
		{
			tcl.teclaWSolta=1;
			tcl.teclaASolta=0;
			tcl.teclaSSolta=1;
			tcl.teclaDSolta=1;
			Pers1.personagemAndaX-=2;
		}
		if(tcl.teclaWPressionada == 1)
		{
			tcl.teclaWSolta=0;
			tcl.teclaASolta=1;
			tcl.teclaSSolta=1;
			tcl.teclaDSolta=1;
			Pers1.personagemAndaY+=2;
		}
		if(tcl.teclaSPressionada == 1)
		{
			tcl.teclaWSolta=1;
			tcl.teclaASolta=1;
			tcl.teclaSSolta=0;
			tcl.teclaDSolta=1;
			Pers1.personagemAndaY-=2;
		}
	}

	if(tcl.teclaShiftPressionada == 0)
	{
		tcl.teclaShiftSolta = 1;
		Pers1.personagemCorre=0;
	
		if(tcl.teclaDPressionada == 1)
		{
			tcl.teclaWSolta=1;
			tcl.teclaASolta=1;
			tcl.teclaSSolta=1;
			tcl.teclaDSolta=0;
			Pers1.personagemAndaX++;
		}
		if(tcl.teclaAPressionada == 1)
		{
			tcl.teclaWSolta=1;
			tcl.teclaASolta=0;
			tcl.teclaSSolta=1;
			tcl.teclaDSolta=1;
			Pers1.personagemAndaX--;
		}
		if(tcl.teclaWPressionada == 1)
		{
			tcl.teclaWSolta=0;
			tcl.teclaASolta=1;
			tcl.teclaSSolta=1;
			tcl.teclaDSolta=1;
			Pers1.personagemAndaY++;
		}
		if(tcl.teclaSPressionada == 1)
		{
			tcl.teclaWSolta=1;
			tcl.teclaASolta=1;
			tcl.teclaSSolta=0;
			tcl.teclaDSolta=1;
			Pers1.personagemAndaY--;
		}
	}
	return Pers1;		
}

void Ataca()
{
	struct Personagem_Mundo Pers1;
	struct Mouse Mse;
	if(Mse.mouseBotaoDireitoPressionada == 1)
	{
		Mse.mouseBotaoDireitoSolta=0;
		Pers1.personagemAtaca=1;
		Pers1.personagemAtacaDano=1;
	}
	if(Mse.mouseBotaoDireitoPressionada == 0)
	{
		Mse.mouseBotaoDireitoSolta=1;
		Pers1.personagemAtaca=0;
		Pers1.personagemAtacaDano=1;
	}
}

//Minecraft Automation
// Criação Mobs

#include <stdio.h>
struct Mobs_Mundo
{
	int mobs;
	int mobsId;
	int mobsHumor;
	int mobsVida;
	int mobsAtaque;
	int mobsNome;
	int mobsAnda;
	int mobsAndaX;
	int mobsAndaY;
	int mobsAndaZ;
};

struct Mobs_Mundo Mobs_Inicializacao(int fID, int Nome, int fHumor, int fx, int fy, int fz);
void Mobs_Status(struct Mobs_Mundo Mobs1);

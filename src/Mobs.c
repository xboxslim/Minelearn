//Minecraft Automation
// Criação Mobs

#include "Mobs.h"
//-----------------------------//
// Variaveis

char db_Mobs_Mundo[][20]=
{
	"boi",
 	"vaca",
 	"carneiro",
 	"galinha",
 	"zombie",
 	"kreeper",
 	"esqueleto arqueiro"
};

int tam_db_Mobs_Mundo = ((sizeof db_Mobs_Mundo)/20);

struct Mobs_Mundo Mobs_Inicializacao(int fID, int Nome, int fHumor, int fx, int fy, int fz)
{
	struct Mobs_Mundo Mobs1;
	Mobs1.mobsId = fID;
	if((fHumor <= 0) || (fHumor > 2))
		printf("Numero Invalido\n");
	else
		Mobs1.mobsHumor = fHumor;
	if(fHumor == 1)
		Mobs1.mobsAtaque = 0;
	if(fHumor == 2)
		Mobs1.mobsAtaque = 1;
	Mobs1.mobsVida=100;
	Mobs1.mobsAndaX = fx;
	Mobs1.mobsAndaY = fy;
	Mobs1.mobsAndaZ = fz;		
	if((Nome <= 0) || (Nome > tam_db_Mobs_Mundo))
		printf("Numero Invalido\n");
	else
		Mobs1.mobsNome = Nome;
		
	return Mobs1;
}

void Mobs_Status(struct Mobs_Mundo Mobs1)
{
	printf("Mobs ID = %d\n",Mobs1.mobsId);
	if(Mobs1.mobsHumor == 1)
		printf("Mobs Humor = Passivo\n");
	if(Mobs1.mobsHumor == 2)
		printf("Mobs Humor = Agressivo\n");
	printf("Mobs Ataque = %d\n",Mobs1.mobsAtaque);
	printf("Mobs Vida = %d\n",Mobs1.mobsVida);
	printf("Mobs (x) = %d\n",Mobs1.mobsAndaX);
	printf("Mobs (y) = %d\n",Mobs1.mobsAndaY);
	printf("Mobs (z) = %d\n",Mobs1.mobsAndaZ);
	
	if((Mobs1.mobsNome <= 0) || (Mobs1.mobsNome > tam_db_Mobs_Mundo))
		printf("Numero Invalido\n");
	else
		printf("Mobs Nome = %s\n",db_Mobs_Mundo[Mobs1.mobsNome-1]);
	printf("tamanho do banco de dados Mobs = %d\n",tam_db_Mobs_Mundo);	
}

void PrintMobs(int Nome)
{
	if((Nome <= 0) || (Nome > tam_db_Mobs_Mundo))
		printf("Numero Invalido\n");
	else
		printf("%s",db_Mobs_Mundo[Nome-1]);

}

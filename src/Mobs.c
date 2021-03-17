//Minecraft Automation
// Criação Mobs

#include <stdio.h>
//-----------------------------//
// Variaveis

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

//-----------------------------//
int main(){
// Ação.

mobsId=1;
mobsHumor=1; // 1 = passivo
mobsAtaque=0;
mobsHumor=2; // 2 = agressivo
mobsAtaque=1;
mobsVida=100; // nascido
mobsVida=0; // morto 

mobsAndaX=1;
mobsAndaY=1;
mobsAndaZ=0;
mobsAndaX=2;
mobsAndaY=1;
mobsAndaZ=0;
mobsAndaX=3;
mobsAndaY=1;
mobsAndaZ=0;

// tem que ser criado um banco de nomes

mobsNome=1;
mobsNome=2;

/*
 boi
 vaca
 carneiro
 galinha
 zombie
 kreeper
 esqueleto arqueiro
 ...

*/

	printf("Mobs ID = %d\n",mobsId);
	
	if(mobsHumor == 1){
		printf("Mobs humor = Passivo\n");
	}
	if(mobsHumor == 2){
		printf("Mobs humor = Agressivo\n");
	}
	
	printf("Mobs Ataque = %d\n",mobsAtaque);
	printf("Mobs Vida = %d\n",mobsVida);
	
	printf("Mobs Anda X = %d\n",mobsAndaX);
	printf("Mobs Anda Y = %d\n",mobsAndaY);
	printf("Mobs Anda Z = %d\n",mobsAndaZ);
	

	return 0;
}





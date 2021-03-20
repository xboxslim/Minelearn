#include "Personagem.h"

int main()
{
	struct Personagem_Mundo testPers;
	testPers = Personagem_Inicializacao(1,1,1,0);
	Personagem_Status(testPers);
	return 0;
}

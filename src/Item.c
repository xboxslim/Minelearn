//Minecraft Automation
// Criando Itens

#include "Item.h"
//-----------------------------/

// Variaveis
char db_Item_Mundo[][20]=
{
	"pa",
	"machado",
	"enxada",
	"picareta"
};

int tam_db_Item_Mundo = ((sizeof db_Item_Mundo)/20);

struct Item_Mundo Item_Inicializacao(int fID, int Nome)
{
	struct Item_Mundo Item1;
	Item1.itensId = fID;
	if((Nome <= 0) || (Nome > tam_db_Item_Mundo))
		printf("Numero Invalido\n");
	else
		Item1.itensNome = Nome;
	return Item1;
}

void Item_Status(struct Item_Mundo Item1)
{
	printf("Item ID = %d\n",Item1.itensId);
	if((Item1.itensNome <= 0) || (Item1.itensNome > tam_db_Item_Mundo))
		printf("Numero Invalido\n");
	else
		printf("Item Nome = %s\n",db_Item_Mundo[Item1.itensNome-1]);
	printf("tamanho do banco de dados Item = %d\n",tam_db_Item_Mundo);	
}

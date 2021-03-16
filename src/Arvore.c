//Minecraft Automation
//criando Arvores

#include <stdio.h>


//-----------------------------/
//Variaveis

int arvore;
int arvoreSemente;
int arvoreFolha;
int arvoreMadeira;
int arvoreNome;
int arvoreId;

//-----------------------------/

int main(){

//ação

arvoreId=1;
arvoreSemente=1;
arvoreFolha=1;
arvoreMadeira=3;

// tem que ser criado um banco de nomes

arvoreNome=1;

/*

 Carvalho
 Macieira
 Pinheiro


*/

	printf("Arvore ID = %d\n",arvoreId);
	printf("Arvore Semente = %d\n",arvoreSemente);
	printf("Arvore Folha = %d\n",arvoreFolha);
	printf("Arvore Madeira = %d\n",arvoreMadeira);
	
	if(arvoreNome == 1){
		printf("Arvore Nome = Carvalho\n");
	}
	if(arvoreNome == 2){
		printf("Arvore Nome = Macieira\n");
	}
	if(arvoreNome == 3){
		printf("Arvore Nome = Pinheiro\n");
	}
		

	return 0;
}







gcc -c Arvore.c
gcc -c Chao.c
gcc -c Item.c
gcc -c Mobs.c
gcc -c Personagem.c
ar rc libMundo.a Arvore.o Chao.o Item.o Mobs.o Personagem.o
gcc Interface.c -o interface.o -L../src -lMundo

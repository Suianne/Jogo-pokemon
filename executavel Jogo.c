#include <stdio.h>
#include "pokemons.h"
#include <string.h>
#define len 50

int main(){
	char player[len];
	
	printf("Olá, jogador! Qual é o seu nome?\n");
	scanf(" [^\n]%s", &player);
	printf("Bem vindo %s", player);
	
	
	
	return 0;
}
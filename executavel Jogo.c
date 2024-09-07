#include <stdio.h>
#include "pokemons.h"
#include "fila.h"
#include <string.h>
#include <ctype.h>


int main(){
	char player[50];
	pokemon pokemons[15];
	
	
	printf("Ola, jogador! Qual é o seu nome?\n");
	scanf(" %s", &player);
	printf("Bem vindo (a) %s", player);
	
	createPokemons(pokemons);
	int total = strlen(pokemons);
	
	createPokemons(pokemons);
	showPokemons(pokemons, total);
//
	
	
	
	return 0;
}
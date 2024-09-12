#include <stdio.h>
#include "pokemons.h"
#include "fila.h"
#include <string.h>
#include <ctype.h>

typedef struct {
	char name[50];
	pokemon team[3];
}player;


int main(){
	player player;
	pokemon pokemons[15];
	pokemon team[3];
	int teamSize = 3;
	int totalPokemons = 15;
	
	
	printf("Ola, jogador! Qual e o seu nome?\n");
	scanf("%49s", player.name);
	printf("Bem vindo (a) %s", player.name);
	
	createPokemons(pokemons);

	showPokemons(pokemons, totalPokemons);
	
	choosePokemons(pokemons, team, totalPokemons);
	removePokemon(pokemons, &totalPokemons, team, teamSize);
	
	

	
	
	
	return 0;
}
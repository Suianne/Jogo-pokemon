#include <stdio.h>
#include "pokemons.h"
#include "fila.h"
#include "pilha.h"
#include <string.h>
#include <ctype.h>

typedef struct {
	char name[50];
}player;


int main(){
	player player;
	pokemon pokemons[15];
	pokemon team[3];
	int teamSize = 3;
	int totalPokemons = 15;
	type_stack stackPokemon;
	
	initializeStack(&stackPokemon);
	
	
	
	printf("Ola, jogador! Qual e o seu nome?\n");
	scanf("%49s", player.name);
	printf("Bem vindo (a) %s", player.name);
	
	createPokemons(pokemons);

	showPokemons(pokemons, totalPokemons);
	
	choosePokemons(pokemons, team, totalPokemons);
	removePokemon(pokemons, &totalPokemons, team, teamSize);
	
//	showPokemons(pokemons, totalPokemons);
	shufflePokemons(pokemons, totalPokemons);
//	showPokemons(pokemons, totalPokemons);
	
	stackPokemons(pokemons, &stackPokemon, totalPokemons);
//	printStack(stackPokemon);


	
	
	
	return 0;
}
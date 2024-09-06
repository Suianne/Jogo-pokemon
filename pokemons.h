#include <stdio.h>
#include "pilha.h"
#include "fila.h"
#include <string.h>
#ifndef POKEMONS_H
#define POKEMONS_H
#define len 40
#define pokemons 15

//essas são as funções da biblioteca pokemon
void create Pokemons (pokemon pokemons[]); //função que cria 15 pokemons pré-definidos
void showPokemons(pokemon pokemons[], int total); //função que mostra os pokemons

typedef struct {
	char name[len];
	int hp;
	int attack;
	int defense;
	int spAttack;
	int spDefense;
	int speed;
	int level;
	char type[len];
	type_line skills;
	int levelEvo;
	
} pokemon;

void createPokemons(pokemon pokemons[]){
	//incializando os pokemons
	
	//Pokemon 1
	strcpy(pokemons[0].name, "Bulbassaur");
	strcpy(pokemons[0].type, "Grass\Poison");
	pokemons[0].hp = 45;
	pokemons[0].attack = 49;
	pokemons[0].defense = 49;
	pokemons[0].spAttack = 65;
	pokemons[0].spDefense = 65;
	pokemons[0].speed = 45;
	pokemons[0].level = 5;
	pokemons[0].levelEvo = 16;
	/*inicializar a fila de habilidades e inserir pelo menos uma*/
	initializeLine(&pokemons[0].skills);
	
	//Pokemon 2
	
	
	
}

void showPokemons(pokemon pokemons[], int total){
	printf("Escolha 3 pokemons da lista abaixo:\n ");
	for(int i = 0; i <total; i++){
		printf("%d - %s (HP: %d | Type: %s | Attack: %d | Defense: %d | Special Attack: %d | Special defense: %d | Speed: %d | ", i+1, pokemons[i].name, 
		pokemons[i].hp, pokemons[i].type, pokemons[i].attack, pokemons[i].defense, pokemons[i].spAttack, pokemons[i].spDefense, pokemons[i].speed);
		
		printf("Habilidades: ");
		
	}
	
}


#endif

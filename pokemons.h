#include <stdio.h>
#include <stdlib.h> //para usar a função de sorteio
#include <time.h> //para inicializar a função de sorteio, sempre usar números novos
#include "pilha.h"
#include "fila.h"
#include <string.h>
#ifndef POKEMONS_H
#define POKEMONS_H


//essas são as funções da biblioteca pokemon


typedef struct {
	int id;
	char name[40];
	int hp;
	int attack;
	int defense;
	int spAttack;
	int spDefense;
	int speed;
	int level;
	char type[40];
	type_line skills;
	int levelEvo;
	
} pokemon;

void createPokemons(pokemon pokemons[]){
	//incializando os pokemons
	
	//Pokemon 1
	pokemons[0].id = 1;
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
	
	//incialização da fila de habilidades e inserção de uma habilidade, pelo menos
	initializeLine(&pokemons[0].skills);
	
	ability a1 = {"Overgrow"};
	
	insertAbility(&pokemons[0].skills, a1);

	//Pokemon 2
	pokemons[1].id = 2;
	strcpy(pokemons[1].name, "Charmander");
	strcpy(pokemons[1].type, "Fire");
	pokemons[1].hp = 39;
	pokemons[1].attack = 52;
	pokemons[1].defense = 43;
	pokemons[1].spAttack = 60;
	pokemons[1].spDefense = 50;
	pokemons[1].speed = 65;
	pokemons[1].level = 5;
	pokemons[1].levelEvo = 16;
	
	//incialização da fila de habilidades e inserção de uma habilidade, pelo menos
	initializeLine(&pokemons[1].skills);
	
	ability a2 = {"Blaze"};
	
	insertAbility(&pokemons[1].skills, a2);
	
	//Pokemon 3
	pokemons[2].id = 3;
	strcpy(pokemons[2].name, "Squirtle");
	strcpy(pokemons[2].type, "Water");
	pokemons[2].hp = 44;
	pokemons[2].attack = 48;
	pokemons[2].defense = 65;
	pokemons[2].spAttack = 50;
	pokemons[2].spDefense = 64;
	pokemons[2].speed = 43;
	pokemons[2].level = 5;
	pokemons[2].levelEvo = 16;
	
	//incialização da fila de habilidades e inserção de uma habilidade, pelo menos
	initializeLine(&pokemons[2].skills);
	
	ability a3 = {"Torrent"};
	
	insertAbility(&pokemons[2].skills, a3);
	
	//Pokemon 4
	pokemons[3].id = 4;
	strcpy(pokemons[3].name, "Caterpie");
	strcpy(pokemons[3].type, "Bug");
	pokemons[3].hp = 45;
	pokemons[3].attack = 30;
	pokemons[3].defense = 35;
	pokemons[3].spAttack = 20;
	pokemons[3].spDefense = 20;
	pokemons[3].speed = 45;
	pokemons[3].level = 1;
	pokemons[3].levelEvo = 7;
	
	//incialização da fila de habilidades e inserção de uma habilidade, pelo menos
	initializeLine(&pokemons[3].skills);
	
	ability a4 = {"Shed Skin"};
	
	insertAbility(&pokemons[3].skills, a4);
	
	//Pokemon 5
	pokemons[4].id = 5;
	strcpy(pokemons[4].name, "Weedle");
	strcpy(pokemons[4].type, "Bug\Poison");
	pokemons[4].hp = 40;
	pokemons[4].attack = 35;
	pokemons[4].defense = 30;
	pokemons[4].spAttack = 20;
	pokemons[4].spDefense = 20;
	pokemons[4].speed = 50;
	pokemons[4].level = 1;
	pokemons[4].levelEvo = 7;
	
	//incialização da fila de habilidades e inserção de uma habilidade, pelo menos
	initializeLine(&pokemons[4].skills);
	
	ability a5 = {"Shield Dust"};
	
	insertAbility(&pokemons[4].skills, a5);
	
	//Pokemon 6
	pokemons[5].id = 6;
	strcpy(pokemons[5].name, "Pidgle");
	strcpy(pokemons[5].type, "Normal\Flying");
	pokemons[5].hp = 40;
	pokemons[5].attack = 45;
	pokemons[5].defense = 40;
	pokemons[5].spAttack = 35;
	pokemons[5].spDefense = 35;
	pokemons[5].speed = 56;
	pokemons[5].level = 1;
	pokemons[5].levelEvo = 18;
	
	//incialização da fila de habilidades e inserção de uma habilidade, pelo menos
	initializeLine(&pokemons[5].skills);
	
	ability a6 = {"Keen Eye"};
	
	insertAbility(&pokemons[5].skills, a6);
	
	//Pokemon 7
	pokemons[6].id = 7;
	strcpy(pokemons[6].name, "Rattata");
	strcpy(pokemons[6].type, "Normal");
	pokemons[6].hp = 30;
	pokemons[6].attack = 56;
	pokemons[6].defense = 35;
	pokemons[6].spAttack = 25;
	pokemons[6].spDefense = 35;
	pokemons[6].speed = 72;
	pokemons[6].level = 2;
	pokemons[6].levelEvo = 20;
	
	//incialização da fila de habilidades e inserção de uma habilidade, pelo menos
	initializeLine(&pokemons[6].skills);
	
	ability a7 = {"Run Away"};
	
	insertAbility(&pokemons[6].skills, a7);
	
	//Pokemon 8
	pokemons[7].id = 8;
	strcpy(pokemons[7].name, "Spearow");
	strcpy(pokemons[7].type, "Normal\Flying");
	pokemons[7].hp = 40;
	pokemons[7].attack = 60;
	pokemons[7].defense = 30;
	pokemons[7].spAttack = 31;
	pokemons[7].spDefense = 30;
	pokemons[7].speed = 70;
	pokemons[7].level = 14;
	pokemons[7].levelEvo = 20;
	
	//incialização da fila de habilidades e inserção de uma habilidade, pelo menos
	initializeLine(&pokemons[7].skills);
	
	ability a8 = {"Sniper"};
	
	insertAbility(&pokemons[7].skills, a8);
	
	//Pokemon 9
	pokemons[8].id = 9;
	strcpy(pokemons[8].name, "Ekans");
	strcpy(pokemons[8].type, "Poison");
	pokemons[8].hp = 35;
	pokemons[8].attack = 60;
	pokemons[8].defense = 44;
	pokemons[8].spAttack = 40;
	pokemons[8].spDefense = 54;
	pokemons[8].speed = 55;
	pokemons[8].level = 15;
	pokemons[8].levelEvo = 22;
	
	//incialização da fila de habilidades e inserção de uma habilidade, pelo menos
	initializeLine(&pokemons[8].skills);
	
	ability a9 = {"Intimidate"};
	
	insertAbility(&pokemons[8].skills, a9);
	
	//Pokemon 10
	pokemons[9].id = 10;
	strcpy(pokemons[9].name, "Pikachu");
	strcpy(pokemons[9].type, "Electric");
	pokemons[9].hp = 35;
	pokemons[9].attack = 55;
	pokemons[9].defense = 40;
	pokemons[9].spAttack = 50;
	pokemons[9].spDefense = 50;
	pokemons[9].speed = 90;
	pokemons[9].level = 5;
	pokemons[9].levelEvo = 22;
	
	//incialização da fila de habilidades e inserção de uma habilidade, pelo menos
	initializeLine(&pokemons[9].skills);
	
	ability a10 = {"Static"};
	
	insertAbility(&pokemons[9].skills, a10);
	
	//Pokemon 11
	pokemons[10].id = 11;
	strcpy(pokemons[10].name, "Nidoran(F)");
	strcpy(pokemons[10].type, "Poison");
	pokemons[10].hp = 55;
	pokemons[10].attack = 47;
	pokemons[10].defense = 52;
	pokemons[10].spAttack = 40;
	pokemons[10].spDefense = 50;
	pokemons[10].speed = 41;
	pokemons[10].level = 1;
	pokemons[10].levelEvo = 16;
	
	//incialização da fila de habilidades e inserção de uma habilidade, pelo menos
	initializeLine(&pokemons[10].skills);
	
	ability a11 = {"Poison Point"};
	
	insertAbility(&pokemons[10].skills, a11);
	
	//Pokemon 12
	pokemons[11].id = 12;
	strcpy(pokemons[11].name, "Nidoran(M)");
	strcpy(pokemons[11].type, "Poison");
	pokemons[11].hp = 46;
	pokemons[11].attack = 57;
	pokemons[11].defense = 40;
	pokemons[11].spAttack = 40;
	pokemons[11].spDefense = 40;
	pokemons[11].speed = 50;
	pokemons[11].level = 1;
	pokemons[11].levelEvo = 16;
	
	//incialização da fila de habilidades e inserção de uma habilidade, pelo menos
	initializeLine(&pokemons[11].skills);
	
	ability a12 = {"Rivalry"};
	
	insertAbility(&pokemons[11].skills, a12);
	
	//Pokemon 13
	pokemons[12].id = 13;
	strcpy(pokemons[12].name, "Clefairy");
	strcpy(pokemons[12].type, "Fada");
	pokemons[12].hp = 70;
	pokemons[12].attack = 45;
	pokemons[12].defense = 48;
	pokemons[12].spAttack = 60;
	pokemons[12].spDefense = 65;
	pokemons[12].speed = 35;
	pokemons[12].level = 5;
	pokemons[12].levelEvo = 16;
	
	//incialização da fila de habilidades e inserção de uma habilidade, pelo menos
	initializeLine(&pokemons[12].skills);
	
	ability a13 = {"Cute Charm"};
	
	insertAbility(&pokemons[12].skills, a1);
	
	//Pokemon 14
	pokemons[13].id = 14;
	strcpy(pokemons[13].name, "Vulpix");
	strcpy(pokemons[13].type, "Fire");
	pokemons[13].hp = 38;
	pokemons[13].attack = 41;
	pokemons[13].defense = 40;
	pokemons[13].spAttack = 50;
	pokemons[13].spDefense = 65;
	pokemons[13].speed = 65;
	pokemons[13].level = 5;
	pokemons[13].levelEvo = 16;
	
	//incialização da fila de habilidades e inserção de uma habilidade, pelo menos
	initializeLine(&pokemons[13].skills);
	
	ability a14 = {"Snow Cloak"};
	
	insertAbility(&pokemons[13].skills, a14);
	
	//Pokemon 15
	pokemons[14].id = 15;
	strcpy(pokemons[14].name, "Oddish");
	strcpy(pokemons[14].type, "Grass\Poison");
	pokemons[14].hp = 45;
	pokemons[14].attack = 50;
	pokemons[14].defense = 55;
	pokemons[14].spAttack = 75;
	pokemons[14].spDefense = 65;
	pokemons[14].speed = 30;
	pokemons[14].level = 10;
	pokemons[14].levelEvo = 21;
	
	//incialização da fila de habilidades e inserção de uma habilidade, pelo menos
	initializeLine(&pokemons[14].skills);
	
	ability a15 = {"Chlorophyll"};
	
	insertAbility(&pokemons[14].skills, a15);
}




void showPokemons(pokemon pokemons[], int total){
	printf("\nEscolha 3 pokemons da lista abaixo:\n ");
	for(int i = 0; i < total; i++){
		printf("%d - %s (HP: %d | Type: %s | Attack: %d | Defense: %d | Special Attack: %d | Special defense: %d | Speed: %d | ", i+1, pokemons[i].name, 
		pokemons[i].hp, pokemons[i].type, pokemons[i].attack, pokemons[i].defense, pokemons[i].spAttack, pokemons[i].spDefense, pokemons[i].speed);
		
		
		showAbilities(&(pokemons[i].skills));
		printf("\n");
		
		
	}
	
}

void removePokemon(pokemon pokemons[], int *total, pokemon team [], int teamSize){
	for(int i = 0; i < teamSize; i++){
		
		int teamID = team[i].id; //guarda o ID do pokemon do time
		
		for (int j = 0; j < *total; j++){
			
			//verificando se existe no vetor de pokemons um ID correspondente ao que está no time para retirar
			
			if (pokemons[j].id == teamID){
				
				for (int k = j; k < *total-1; k++){
					pokemons[k] = pokemons[k+1]; //move os pokemons para a próxima posição
				}
				
				(*total)--;
				j--;
				break;
				
			}
		}
	}
}

void choosePokemons(pokemon pokemons[], pokemon team[], int total){
	int choose, i = 0; //variável para controlar a quantidade de pokemons escolhidos
	
	while(i < 3){
		printf("Escolha o pokemon (%d de 3), digite um numero de 1 a %d ", i+1, total);
		scanf("%d", &choose);
		
		int foundPokemon = 0; //se for 1 é que encontrou o pokemon, 0 que não
		
		for (int j = 0; j < total; j++){
			
			//verifica em todo o vetor de pokemons se existe um pokemon com o mesmo id da variável escolha 
			
			if(pokemons[j].id == choose){
				
				team[i] = pokemons[j]; //guarda o pokemon com a váriavel escolha correta no time
				foundPokemon = 1; // diz que encontrou o pokemon
				break; // para de procurar
				
			}
		}
		
		if (foundPokemon){ // só segue se o pokemon foi realmente encontrado e colocado no time
		
			i++; //incrementa o i, para rodar a escolha mais uma vez e seguir mais uma casa na posição física do vetor time
			
		} else { //se o pokemon já foi escolhido, ou se ele não existe mais no array
		
			printf("Opcao invalida, esse Pokemon nao esta disponivel. Por favor, informe outro ID: ");
		}
		
		
	}
	
	printf("\nSeu time e esse:\n");
	for(int k = 0; k <3; k++){
		printf("%s\n", team[k].name);
	}
	
}

void shufflePokemons(pokemon pokemons[], int total){
	
	//inicializa o sorteador com numeros aleatórios que vem do relógio do computador
	srand(time(NULL));
	
	//laço para percorrer o array de pokemons de trás para frente
	for(int i = total - 1; i > 0; i--){
		
		//fiz a escolha do número aleatório parecido com o algoritmo de Fisher Yates
		
		int j = rand() % (i+1);//esse trecho define j (um novo indice que pode ser usado) como um numero aleatoria que esta entre 0 e i+1 que nesse caso é o tamanho total de pokemons
		
		//troca de pokemons por meio de uma variável auxiliar 
		pokemon temp = pokemons[i];
		pokemons[i] = pokemons[j];
		pokemons[j] = temp;
		
		
	}
	

}


//void createPokemons (pokemon pokemons[]); //função que cria 15 pokemons pré-definidos
//void showPokemons(pokemon pokemons[], int total); //função que mostra os pokemons



#endif
                                    
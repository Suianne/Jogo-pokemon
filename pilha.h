#include <stdio.h>
#ifndef PILHA_H
#define PILHA_H
#include "pokemons.h"
#define MAX 100

//typedef int 
//    type_item;


typedef struct {
    int top;
    pokemon item[MAX];

} type_stack;

void initializeStack(type_stack *s){
    s->top = -1; //para inicializar a pilha
}

int stackEmpty(type_stack *s){
    return s->top == -1; //aqui ele retorna 1 que representa "true" 
}

int stackFull(type_stack *s){
    return s->top == MAX-1;
}

int push(type_stack *s, pokemon p){
    if(stackFull(s)) return 0; //a pilha tá cheia e eu não posso empilhar mais
    s->item[++s->top] = p;
    return 1;
}

int pop(type_stack *s, pokemon *p){
    if(stackEmpty(s)) return 0; //verifica se a pilha está vazia, se estiver vazia (1 - true), aborta e não retirar 
    *p = s->item[s->top--];
    return 1;
}

int top (type_stack *s, pokemon *p){
    if(stackEmpty(s)) return 0;
    *p = s->item[s->top];
    return 1;
}

int lenStack(type_stack *s){
    return s->top+1;
}

void printStack(type_stack s){
    pokemon p;
	printf("\nEssa e a pilha de pokemons\n");
    //impressão da cópia da pilha
    while(!stackEmpty(&s)){
        pop(&s, &p);
        printf("Pokemon: %s\n", p.name);
    }
}

void stackPokemons(pokemon pokemons[], type_stack *s, int total){
	
	for (int i= 0; i < total; i++){
		push(s, pokemons[i]);
	}
	
}








#endif
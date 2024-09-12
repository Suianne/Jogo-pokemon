#ifndef FILA_H
#define FILA_H
#include <stdio.h>
#include "pilha.h"
#define LEN 5

typedef int type_item;

typedef struct {
	char name[30];
} ability;

// arrumar uma fila de habilidades (tipo char), inicializar ela e depois printar junto com a apresentação do pokemon

typedef struct{
	ability abilities[LEN];
	int start, end;
	// int len;
}type_line;


void initializeLine(type_line *l){ //inicio e fim passam a ocupar a mesma posição física do vetor
	l->start = l->end = LEN-1;
	//l->tam = 0;
}

int lineEmpty(type_line *l){
	if(l->start == l->end) return 1;
	return 0;
}

int next(int pos){
	if(pos == LEN-1){
		return 0;
	} else {
		pos++;
		return pos;
	}
}

int lineFull (type_line *l){
	if(next(l->end)==l->start){
		return 1;
	} else {
		return 0;
	}
}

//int insertLine(type_line *l, ability a){
//	if(lineFull(l)){
//		return 0;
//	} else {
//		l->end = next(l->end);
//		l->abilities[l->end] = a;
//		return 1;
//	}
//}

int insertAbility(type_line *l, ability a) {
    if (lineFull(l)) {
        printf("Fila de habilidades cheia!\n");
        return 0;
    }
    l->abilities[l->end] = a;
    l->end++;
    return 1;
}


void showAbilities(type_line *l) {
    if (l->end == l->start) {
        printf("Nenhuma habilidade.\n");
        return;
    }

    printf("Habilidades: ");
    for (int i = l->start; i < l->end; i++) {
        printf(" %s\n", l->abilities[i].name);
    }
}

int removeLine(type_line *l, ability *a){
	if(lineEmpty(l)){
		return 0;
	} else {
		l->start = next(l->start);
		*a = l->abilities[l->start];
		return 1;
	}
}

void printLine(type_line l){
	ability a;
	while(!lineEmpty(&l)){
		removeLine(&l, &a);
		printf("%d\n", a);
	}
}

int lenghtLine (type_line *l){
	if(lineEmpty(l)) {
		return 0;
	} else if (l->start < l->end){
		return l->end - l->start;
	} else {
		return MAX -1 - l->start + l->end + 1;
	}
}

int lenghtLine2 (type_line l){
	int cont=0;
	ability a;
	
	while(!lineEmpty(&l)){
		removeLine(&l, &a);
		cont++;
	}
	
	return cont;
}



#endif
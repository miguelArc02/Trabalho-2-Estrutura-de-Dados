#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>

#define N 1000

extern long long comparacoes;
extern long long trocas;

void resetContadores();
void swap(int *a, int *b);
void copiarArray(int origem[], int destino[], int n);
void gerarCenarios(int ordenado[], int reverso[], int aleatorio[], int duplicados[]);
void mostrarPrevia(int v[], int n);

#endif

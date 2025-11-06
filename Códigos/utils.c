#include "utils.h"
#include <time.h>

long long comparacoes = 0;
long long trocas = 0;

void resetContadores() {
    comparacoes = 0;
    trocas = 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    trocas++;
}

void copiarArray(int origem[], int destino[], int n) {
    for (int i = 0; i < n; i++) destino[i] = origem[i];
}

void gerarCenarios(int ordenado[], int reverso[], int aleatorio[], int duplicados[]) {
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        ordenado[i] = i;
        reverso[i] = N - i;
        aleatorio[i] = rand() % N;
        duplicados[i] = rand() % 10;
    }
}

void mostrarPrevia(int v[], int n) {
    printf("[");
    for (int i = 0; i < 10 && i < n; i++) {
        printf("%d", v[i]);
        if (i < 9 && i < n - 1) printf(", ");
    }
    if (n > 10) printf(", ...]");
    else printf("]");
}

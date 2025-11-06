#include <stdio.h>
#include "utils.h"
#include "bubble_sort.h"
#include "selection_sort.h"
#include "insertion_sort.h"
#include "quick_sort.h"
#include "merge_sort.h"

void executarTeste(void (*algoritmo)(int[], int), const char *nome, int base[]) {
    int v[N];
    copiarArray(base, v, N);
    resetContadores();
    algoritmo(v, N);
    printf("%-15s | %10lld | %10lld\n", nome, comparacoes, trocas);
}

void executarTesteRec(void (*algoritmo)(int[], int, int), const char *nome, int base[]) {
    int v[N];
    copiarArray(base, v, N);
    resetContadores();
    algoritmo(v, 0, N - 1);
    printf("%-15s | %10lld | %10lld\n", nome, comparacoes, trocas);
}

int main() {
    int ordenado[N], reverso[N], aleatorio[N], duplicados[N];
    gerarCenarios(ordenado, reverso, aleatorio, duplicados);

    const char *nomesCenarios[] = {"Ordenado", "Reverso", "Aleatorio", "Duplicados"};
    int *cenarios[] = {ordenado, reverso, aleatorio, duplicados};
	int c;
    for (c = 0; c < 4; c++) {
        printf("\n\n\n\n       Cenario: %s       \n", nomesCenarios[c]);
        printf("Vetor de entrada: ");
        mostrarPrevia(cenarios[c], N);
        printf("\n");
        printf("Algoritmo       | Comparacoes |    Trocas\n");
        printf("------------------------------------------\n");

        executarTeste(bubbleSort, "Bubble Sort", cenarios[c]);
        executarTeste(selectionSort, "Selection Sort", cenarios[c]);
        executarTeste(insertionSort, "Insertion Sort", cenarios[c]);
        executarTesteRec(quickSort, "Quick Sort", cenarios[c]);
        executarTesteRec(mergeSort, "Merge Sort", cenarios[c]);
    }
    return 0;
}


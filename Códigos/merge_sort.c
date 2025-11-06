#include "utils.h"
#include "merge_sort.h"

void merge(int v[], int esq, int meio, int dir) {
    int n1 = meio - esq + 1;
    int n2 = dir - meio;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) L[i] = v[esq + i];
    for (int j = 0; j < n2; j++) R[j] = v[meio + 1 + j];

    int i = 0, j = 0, k = esq;
    while (i < n1 && j < n2) {
        comparacoes++;
        if (L[i] <= R[j]) v[k++] = L[i++];
        else {
            v[k++] = R[j++];
            trocas++;
        }
    }
    while (i < n1) v[k++] = L[i++];
    while (j < n2) v[k++] = R[j++];
}

void mergeSort(int v[], int esq, int dir) {
    if (esq < dir) {
        int meio = esq + (dir - esq) / 2;
        mergeSort(v, esq, meio);
        mergeSort(v, meio + 1, dir);
        merge(v, esq, meio, dir);
    }
}


#include "utils.h"
#include "insertion_sort.h"

void insertionSort(int v[], int n) {
    for (int i = 1; i < n; i++) {
        int chave = v[i];
        int j = i - 1;
        while (j >= 0 && (++comparacoes && v[j] > chave)) {
            v[j + 1] = v[j];
            trocas++;
            j--;
        }
        v[j + 1] = chave;
    }
}

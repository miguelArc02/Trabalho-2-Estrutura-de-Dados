#include "utils.h"
#include "quick_sort.h"

int particiona(int v[], int baixo, int alto) {
    int pivo = v[alto];
    int i = baixo - 1;
    for (int j = baixo; j < alto; j++) {
        comparacoes++;
        if (v[j] <= pivo) {
            i++;
            swap(&v[i], &v[j]);
        }
    }
    swap(&v[i + 1], &v[alto]);
    return i + 1;
}

void quickSort(int v[], int baixo, int alto) {
    if (baixo < alto) {
        int pi = particiona(v, baixo, alto);
        quickSort(v, baixo, pi - 1);
        quickSort(v, pi + 1, alto);
    }
}

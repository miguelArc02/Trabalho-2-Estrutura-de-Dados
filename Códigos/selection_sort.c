#include "utils.h"
#include "selection_sort.h"

void selectionSort(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            comparacoes++;
            if (v[j] < v[min]) min = j;
        }
        if (min != i) swap(&v[i], &v[min]);
    }
}

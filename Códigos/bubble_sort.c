#include "utils.h"
#include "bubble_sort.h"

void bubbleSort(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
    	int trocou = 0;
        for (int j = 0; j < n - i - 1; j++) {
            comparacoes++;
            if (v[j] > v[j + 1]){
            	swap(&v[j], &v[j + 1]);
            	trocou = 1;
			}
        }
        if(trocou == 0)
        	break;
    }
}

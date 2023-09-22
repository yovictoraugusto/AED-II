#include <stdio.h>

int main(void) {
    int n = 10;
    int vet[] = {4, 7, 1, 1, 6, 2, 8, 9, 5, 2};
    int min, i, j, aux;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n-1; j++) {
            if (vet[j] < vet[min]) {
                min = j;
            }
        }
        aux = vet[min];
        vet[min] = vet[i];
        vet[i] = aux;
    }

    for (int y = 0; y < n; y++) {
        printf("%d, ", vet[y]);
    }
    return 0;
}

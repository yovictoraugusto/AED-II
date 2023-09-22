#include<stdio.h>

int main(void){
    int n = 10;
    int vet[] = {4, 7, 1, 1, 6, 2, 8, 9, 5, 2};
    int j, i, aux;
    for(i = n - 1; i>=0; i--){
        for(j = 0; j < i; j++){
            if(vet[j] > vet[j+1]){
                aux = vet[j+1];
                vet[j+1] = vet[j];
                vet[j] = aux;
            }
        }
    }

    for (int y = 0; y < n; y++) {
        printf("%d, ", vet[y]);
    }
}
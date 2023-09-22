#include<stdio.h>
#define N 8

void merge(int vet[], int p, int q, int r){ //p inicio, q meio, r fim
    int temp[N], p1, p2, tamanho, i, j, k;
    int fim1 = 0, fim2 = 0;
    p1 = p;
    p2 = q+1;
    tamanho = r - p +1;
    for(i = 0; i<tamanho; i++){
        if(!fim1 && !fim2){
            if(vet[p1] < vet[p2]){
                temp[i] = vet[p1++];
            }else{
                temp[i] = vet[p2++];
            }if(p1>q) fim1 = 1; //Para de comparar os vetores e vai para o else onde copia o resto do vetor no final de temp
            if(p2>r) fim2 = 1;
        }else{
            if(!fim1){
                temp[i] = vet[p1++];
            }else{
                temp[i] = vet[p2++];
            }
        }
    }for(j = 0, k = p; j<tamanho; j++, k++){
        vet[k] = temp[j];
    }
}

void mergeSort(int vet[], int p, int r){
    if(p<r){
        int q = (p+r)/2;
        mergeSort(vet, p, q);
        mergeSort(vet, q+1,r);
        merge(vet, p,q,r);
    }
}

int main(){
    int vet [] = {5,2,4,7,1,3,2,6};
    mergeSort(vet,0,N); // Vetor, inicio, fim

    for (int y = 0; y < N; y++) {
        printf("%d, ", vet[y]);
    }
    printf("\n");
    return 0;
}
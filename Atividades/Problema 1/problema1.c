#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int encontrar(int vet[], int j, int S, int aux) {
    int mid;
    while (j <= S) {
        mid = (j + S) / 2;
        if (vet[mid] == aux) return 1;
        if (vet[mid] < aux) j = mid + 1;
        else S = mid - 1;
    }
    return 0;
}

int main(){
    int S,N;
    int i,j,aux, count;
    count = 0;
    scanf("%d %d", &S, &N);
    int s[S];
    if((S>1 && S<= 10000) && (N>=-60000 && N<=60000)){
        for(i = 0; i < S; i++){
            scanf("%d", &s[i]);
        }
    }

    qsort(s, S, sizeof(int), cmpfunc);

    for (i = 0; i < S; i++) {
        int aux = N - s[i];
        int test = encontrar(s, i + 1, S - 1, aux);
        count = count + test;
    }

    printf("%d\n", count);

    return 0;
}
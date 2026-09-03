#include <stdio.h>
#include <stdlib.h>


int contarPares(int v[], int n);

int main(void){
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%i", &n);

    int v[n];

    for(int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%i", &v[i]);
    }
    printf("Quantidade de pares: %i\n", contarPares(v, n));
    return 0;
}

int contarPares(int v[], int n){
    if(v[n-1] % 2 == 0)
        return contarPares(v, n-1) + 1;
}
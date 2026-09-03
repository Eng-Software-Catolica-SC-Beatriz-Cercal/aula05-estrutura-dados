#include <stdio.h>
#include <stdlib.h>

int somaDigitos(int x);

int main(void){
    int x;

    printf("Digite um numero: ");
    scanf("%i",&x);

    printf("Soma dos dígitos: %i\n",somaDigitos(x));

    return 0;
}

int somaDigitos(int x){
    if(x==0) return 0;
    return x % 10 + somaDigitos(x/10);
}
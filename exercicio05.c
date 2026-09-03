#include <stdio.h>
#include <stdlib.h>


struct Lista {
    int valor;
    struct Lista *proximo;
};

void listaRecursiva(struct Lista *lista);

int main() {
    int tamanho;

    printf("Digite o tamanho da lista: ");
    scanf("%i", &tamanho);

    struct Lista lista[tamanho];

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o numero: ");
        scanf("%i", &lista[i].valor);

        if (i < tamanho - 1)
            lista[i].proximo = &lista[i + 1];
        else
            lista[i].proximo = NULL;
    }
    printf("Lista: ");
    listaRecursiva(&lista[0]);
    return 0;
}

void listaRecursiva(struct Lista *lista) {
    if (lista == NULL)
        return;
    printf("%i ", lista->valor);
    listaRecursiva(lista->proximo);
}
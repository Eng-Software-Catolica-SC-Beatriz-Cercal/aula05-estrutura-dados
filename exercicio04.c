#include <stdio.h>
#include <stdlib.h>

int maiorValor(int v[], int n);

int main(void)
{
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%i", &n);

    int v[n];

    for (int i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%i", &v[i]);
    }
    printf("Maior valor do vetor: %i\n", maiorValor(v, n));
    return 0;
}

int maiorValor(int v[], int n)
{
    if (n == 1)
        return v[0];
    if (v[n - 1] > maior(v, n - 1))
        return v[n - 1];
    return maior(v, n - 1);
}

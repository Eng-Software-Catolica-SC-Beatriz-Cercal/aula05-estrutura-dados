#include <stdio.h>
#include <stdlib.h>

int fatorial(int n);

int main(void){
	int n, fat=1;
	
	printf("Digite um numero: ");
	scanf("%i",&n);
	
	fat=fatorial(n);
	
	printf("O fatorial e %i\n",fat);
	
	return 0;
}

int fatorial(int n){
	if(n==1) return 1;
	return n*fatorial(n-1);
}
#include <stdio.h>
#include <stdlib.h>

int pit(int n);

int main(void){
	int n;
	
	printf("Digite um numero: ");
	scanf("%i",&n);
	printf("O valor e %i\n",pit(n));
	return 0;
}

int pit(int n){
	if(n==1) return 1;
	return pit(n-1)+n;
}
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n, fat=1;
	
	printf("Digite um numero: ");
	scanf("%i",&n);
	
	for(int i=n;i>=1;i--){
		fat*=i;
	}
	
	printf("O fatorial e %i\n",fat);
	
	return 0;
}
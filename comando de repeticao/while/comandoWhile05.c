//Usando o comando while , faca um programa que gere a tabuada de um numero "n" fornecido pelo usuario

#include <stdio.h>

int main(){

	int numero, count;

	printf("Entre com um numero:");
	scanf("%d", &numero);

	count = 0;
	while(count <= 10){
		printf("%d x %d = %d \n", numero, count, (numero * count));
		count++;
	}

	return 0;
}
//Calcula o fatorial de um numero n

#include <stdio.h>

int main(){

	int fat, i, n;

	printf("Digite um numero:");
	scanf("%d", &n);
	fat = 1;

	do{
		fat *= n;
		n--;
	}while (n > 1);
	printf("%d", fat);
	return 0;
}
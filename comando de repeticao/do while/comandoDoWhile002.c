//Desenvolva um algoritimo a estrutura Do While que aponte se o numero digitado e par ou impar. Para sair da estrutura de repeticao deigite 0

#include <stdio.h>

int main(){

	int n;
	do{
		printf("Digite um numero ou 0 para sair:");
		scanf("%d", &n);
		if(n%2 == 1)
		printf("%d e impar \n", n);
	    else
	    printf("%d e par\n", n);
	  }while(n != 0);

	return 0;
}
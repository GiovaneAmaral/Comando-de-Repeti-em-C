//media de um numero desconhecido de alunos

#include <stdio.h>

int main(){

	float n1, n2, n3 ,n4, media;
	int codigo;
	char continuar = 's';

	while(continuar == 's'){
		scanf("%d", &codigo);
	    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
	    media = (n1 + n2 + n3 + n4) / 4;
	    printf("Codigo: %d, Media: %f \n", codigo, media);

	    printf("Mais alunos? Responda s ou n \n");
	    scanf(" %c ", &continuar);
    }
  return 0;

}
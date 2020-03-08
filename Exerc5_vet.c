#include <stdio.h>
#include <stdlib.h>

int main(){

float vet[30], total = 0, media = 0;

int i;
int *pI, *pTotal, *pMedia;
pI = &i;
pTotal = &total;
pMedia = &media;


printf("Insira 30 elementos:\n");

	for(*pI = 0; *pI < 30; *pI = *pI + 1){
		scanf("%f",&vet[*pI]);
	}

	for(*pI = 0; *pI < 30; *pI = *pI + 1){
		*pTotal += vet[*pI];
	}

	*pMedia = *pTotal/ *pI;

	printf("A media eh de: %f", media);

	return 0;
}

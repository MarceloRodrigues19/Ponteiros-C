#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, maior=0, vet[10];
    int *pI, *pMaior;
    pI =  &i;
    pMaior =  &maior;

  
    printf("Digite 10 numeros:\n");
    for (*pI = 0; *pI < 10; *pI = *pI + 1)
    {
		scanf("%d", &vet[i]);
		}

	for(*pI = 0 ; *pI < 10 ; *pI = *pI + 1){
        if(vet[*pI] > *pMaior){
        *pMaior = vet[*pI];
        }
		}
     printf("o maior valor eh %d", maior);
	 
	 
	 return 0;
}

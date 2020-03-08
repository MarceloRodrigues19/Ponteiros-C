#include <stdio.h>
#include <stdlib.h>

int funcPrimo(int a)
{
    int  i,  vezes = 0, valor;
    int *pI, *pVezes, *pValor;
    pI = &i;
    pVezes = &vezes;
    pValor =  &valor;
    
    
    for (*pI = 1; *pI <= a && *pVezes <= 3; *pI = *pI + 1)               
		
    {   
        if (a % *pI == 0)
        *pVezes = *pVezes + 1;
    }
    
    if (*pVezes == 2)
    {
     *pValor = 1;
    }
    else  
    {
     *pValor = 0;
    }
    
    return *pValor;
}

int main (){
    
    
    int  i, num, primo;
       
   
    printf("\nDigite um numero inteiro:\n");
    scanf("%d", &num);
     
    primo = funcPrimo(num);
        
    if (primo == 1)
    printf("O numero %d eh primo.\n", num);
    else
    printf("O numero %d nao eh primo.", num);
    
    
    return 0;
}

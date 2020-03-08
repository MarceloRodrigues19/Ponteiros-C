#include<stdio.h>

void ler(void);
int Maior(int*,int);

int main(){
   ler();
   return 0;
}

void ler(void){
   int i, num[2];
   int *pI;
   pI =  &i;

   for(*pI = 0; *pI < 2; *pI = *pI + 1){
      printf("Digite um numero inteiro\n");
      scanf("%d",&num[*pI]);
   }

   printf("\n%d\n",Maior(num, 2));
}

int Maior(int *num, int n){
   int i, maior = 0;
   int *pI, *pMaior;
   pI = &i;
   pMaior = &maior;
   
   for(*pI = 0; *pI < n; *pI = *pI + 1){
      if (num[*pI] > *pMaior){
         *pMaior = num[*pI];
      }
   }

   return maior;
}

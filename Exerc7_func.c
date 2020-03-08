#include <stdio.h>

int fatorial(int n)
{
	int *p;
	p = &n;
    if(*p == 1)
        return 1;
    else
        return ( *p * fatorial(*p-1) );
}

int main()
{
    int n;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);
	
    printf("%d! = %d\n", n, fatorial(n));
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, f=1, cont;

    printf("Digite um numero: ");
    scanf("%d", &n);
    cont=n;
    do
    {
        f = f * cont;
        cont--;
    }
    while (cont>0);
    printf("O fatorial de %d = %d \n", n, f);
    system("pause");
}

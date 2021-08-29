#include <stdio.h>

int main()
{

    int numero = 0;

    do
    {
        printf("Insira um número de 1 e 10 para que eu mostre a tabuada.\n");
        scanf("%d", &numero);

    } while (numero > 10);

    if (numero <= 10) {
    int tabuada = abs(numero);
    for (int i = 1; i <= 10; i++)
    {
        printf("[ %d x %d = %d ]  ", numero, i, tabuada * i);
    }
}
}
#include<stdio.h>

int main() {

int soma = 0;
for(int contador = 1; contador <= 100; contador++) 
{
soma = soma + contador;
}
printf("A soma é %d ", soma);
}
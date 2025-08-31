#include <stdio.h>

int main (){
    /*
    Atribuição Simples (=)
    Atribuição de Soma (+=)
    Atribuição de Subtração (-=)
    Atribuição de Multiplicação (*=)
    Atribuição de Divisão (/=)
    */
    int numero1, numero2, resultado;

    resultado = 10;
    printf("Resultado: %d\n", resultado);

    resultado += 20;
    printf("Resultado: %d\n", resultado);

    resultado -= 5;
    printf("Resultado: %d\n", resultado);

    resultado *= 2;
    printf("Resultado: %d\n", resultado);

    resultado /= 4;
    printf("Resultado: %d\n", resultado);

    return 0;
}
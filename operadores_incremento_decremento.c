#include <stdio.h>

int main (){
    /*
    Incremento ++
    Pré incremento ++a
    Pós incremento a++
    Decremento --
    Pré decremento --a
    Pós decremento a--
    */

    int numero1 = 1, resultado;

    printf("Antes do incremento: %d\n", numero1);
    //numero1 = numero1 + 1;
    //numero1 += 1;
    resultado = numero1++;
    printf("Depois do pós-incremento - Número 1: %d - Resultado %d\n", numero1, resultado);

    resultado = ++numero1;
    printf("Depois do pré-incremento - Número 1: %d - Resultado %d\n", numero1, resultado);

    //numero1 = numero1 - 1;
    //numero1 -= 1;
    resultado = numero1--;
    printf("Depois do pós-decremento - Número 1: %d - Resultado %d\n", numero1, resultado);

    resultado = --numero1;
    printf("Depois do pré-decremento - Número 1: %d - Resultado %d\n", numero1, resultado);

    return 0;
}
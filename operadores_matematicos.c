#include <stdio.h>

int main (){
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;


    printf("Digite o número 1: \n");
    scanf("%d", &numero1);
    printf("Digite o número 2: \n");
    scanf("%d", &numero2);

    //operação soma
    soma = numero1 + numero2;

    //operação subtração
    subtracao = numero1 - numero2;

    //operação multiplicação
    multiplicacao = numero1 * numero2;

    //operação divisão
    divisao = numero1 / numero2;


    printf("A soma entre %d e %d é: %d\n", numero1, numero2, soma);
    printf("A subtração entre %d e %d é: %d\n", numero1, numero2, subtracao);
    printf("A multiplicação entre %d e %d é: %d\n", numero1, numero2, multiplicacao);
    printf("A divisão entre %d e %d é: %d\n", numero1, numero2, divisao);
}
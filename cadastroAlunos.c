#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[10];

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    printf("Digite a sua altura: \n");
    scanf("%f", &altura);

    printf("Digite o seu nome: \n");
    scanf("%s", &nome);

    printf("Digite sua matrícula: \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s - Matrícula: %d\n", nome, matricula);
    printf("Idade: %d anos - Altura: %.2fm\n", idade, altura);

    return 0;



}
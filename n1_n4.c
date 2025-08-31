#include <stdio.h>

int main (){
    char nome[50];
    printf("Digite o seu nome completo: ");
    fgets(nome, 50, stdin);
    // fgets inclui o '\n' na string, então podemos removê-lo se necessário
    //nome[strcspn(nome, "\n")] = 0;
    printf("Nome completo: %s\n", nome);

}
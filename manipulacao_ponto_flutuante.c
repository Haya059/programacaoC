#include <stdio.h>

int main (){
    // int a = 10;
    // float b = 3.5;
    // float resultado = a + b; //'a' é convertido implicitamente para float

    // printf("Resultado: %.2f\n", resultado);

    // return 0;

    int a = 10;
    int b = 3;
    float quociente = (float) a / b; // 'a' é convertido explicitamente para float
    
    printf("Quociente: %.2f\n", quociente);

    return 0;
}
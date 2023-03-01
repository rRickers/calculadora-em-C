// Código para estudo da Mentoria
// O objetivo é conseguir construir uma calculadora utilizando scanf() printf() e loop para as diferentes contas.

#include <stdio.h>
#include <conio.h>

int main(void)
{
    //1-Adição, 2-Subtração, 3-Multiplicação, 4-Divisão
    int operacao;
    float valor1, valor2;

    printf("Bem-vindo a Calculadora em C, as operacoes matematicas utilizadas sao:\n");
    printf("1 Adicao\n");
    printf("2 Subtracao\n");
    printf("3 Multiplicacao\n");
    printf("4 Divisao\n");
    printf("\n");
    printf("Qual Operacao Matematica voce quer fazer? \n");

    // Aqui é onde o usuário irá escolhe entre as 4 operações
    scanf("%d", &operacao);

    printf("Quais os valores da operacao?\n");
    scanf("%f%f\n", &valor1, &valor2);

    double resultado;
    if(operacao == 1) {

    resultado = valor1 + valor2;
    printf("O resultado e %d", resultado);

    } else if (operacao == 2)
    resultado = valor1 - valor2;
    printf("O resultado e %d", resultado);

    if (operacao == 3) {
    resultado = valor1 * valor2;
    printf("O resultado e %d", resultado);

    } else if(operacao == 4)
    resultado = valor1 / valor2;
    printf("O resultado e %d", resultado);
    /* A ideia é continuar construindo as operações para formar a calculadora... */

    return 0;
}

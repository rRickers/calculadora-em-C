// Código para estudo da Mentoria
// O objetivo é conseguir construir uma calculadora utilizando scanf() printf() e loop para as diferentes contas.

#include <stdio.h>

int main()
{
    //1-Adição, 2-Subtração, 3-Multiplicação, 4-Divisão
    int 1, 2, 3, 4;

    printf("Bem-vindo a Calculadora em C, as operações matemáticas utilizadas são:\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("\n");
    printf("Qual Operação Matemática você quer fazer? \n");

    // Aqui é onde o usuário irá escolhe entre as 4 operações
    scanf("%d", &1, &2, &3, &4);

    //Formulas
    1 = +;
    2 = -;
    3 = *;
    4 = /;

    /* Números escolhidos para o calculo */
    int numero1;
    int numero2;
    int resultado;

    /* Quais números farão a operação de soma */
    printf("Qual os valores para a operação? \n");
    scanf("%d%d\n", &numero1, &numero2);

    resultado = numero1 + numero2;

    printf("O valor da soma é: %d\n", resultado);

    /* A ideia é continuar construindo as operações para formar a calculadora... */

    return 0;
}
// Código para estudo da Mentoria
// O objetivo é conseguir construir uma calculadora utilizando scanf() printf() e loop para as diferentes contas.

#include <stdio.h>

int main(void)
{
    float valor1, valor2, resultado;
    int operacao;

    do
    {
        printf("Bem-vindo a calculadora em C!\n");
        printf("Qual operacao voce gostaria de utilizar?\n");
        printf("1. Adicao;\n");
        printf("2. Subtracao;\n");
        printf("3. Multiplicacao;\n");
        printf("4. Divisao;\n");
        printf("5. Porcentagem;\n");
        printf("Escolha a operacao pelo numeral correspondente: ");
        scanf("%i", &operacao);
        printf("Otimo, agora vamos escolher os valores para a operacao!\n");
        printf("Qual o primeiro valor? X: ");
        scanf("%f", &valor1);
        printf("Qual o segundo valor? Y: ");
        scanf("%f", &valor2);

        switch (operacao)
        {
        case 1:
            resultado= valor1+valor2;
            break;
        case 2:
            resultado= valor1-valor2;
            break;
        case 3:
            resultado= valor1*valor2;
            break;
        case 4:
            resultado= valor1/valor2;
            break;
        case 5:
            resultado= (valor1/100)*valor2;
            break;
        default:
            printf("\nPor favor, escolha uma das opcoes validas!\n");
            break;
        }
        printf("Calculando... O resultado da operacao e: %0.2f", resultado);
        printf("\nGostaria de continuar os calculos? Digite 1 para continuar ou 0 para encerrar. Obrigado! ");
        scanf("%i", &operacao);
    } while (operacao==1);
}

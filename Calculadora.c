// Código para estudo da Mentoria
// O objetivo é conseguir construir uma calculadora utilizando scanf() printf() e loop para as diferentes contas.

#include <stdio.h>

int main(void)
{
    float valor1, valor2, resultado;
    int operacao;

    do
    {
    //Mensagem de boas vindas a calculadora como "menu" de entrada;
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

        //switch e case são utilizados para as opções, inicialmente tentei com if e else, porém não consegui um bom resultado.
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
        //O valor 1 representa o X e será dividido por 100 para encontrar o valor correto, então é multiplicado pelo Y (valor2) e então temos o resultado.
            resultado= (valor1/100)*valor2;
            break;
        default:
        //Caso o usuário escolha um número diferente dos acima (1,2,3,4,5), a calculadora pedirá por padrão o valor de X e Y e então irá mostrar está mensagem.
            printf("\nPor favor, escolha uma das opcoes validas!\n");
            break;
        }
        //O resultado foi colocado como 0.2 para que exista sempre 2 casas no resultado, assim, evitando números quebrados gigantes.
        printf("Calculando... O resultado da operacao e: %0.2f", resultado);
        printf("\nGostaria de continuar os calculos? Digite 1 para continuar ou 0 para encerrar. Obrigado! ");
        scanf("%i", &operacao);
        //"while" é utilizado como laço de repetição, qualquer número diferente de 1 irá encerrar a calculadora.
    } while (operacao==1);
}

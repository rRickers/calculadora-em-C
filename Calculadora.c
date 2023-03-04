// Código para estudo da Mentoria
// O objetivo é conseguir construir uma calculadora utilizando scanf() printf() e loop para as diferentes contas.
// Tornei o menu da calculadora mais amigável, dando a impressão de uma I.A estar calculando.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char usuario[20];
    float valor1, valor2, resultado;
    int operacao;
    int continuar;

    //Mensagem de boas vindas a calculadora como "menu" de entrada;
    printf("\n\nOla, eu sou a calculadora em C, estou aqui para te ajudar com operacoes matematicas.\n");
    printf("Para comecarmos, me diga o seu nome: \n");
    scanf("%s", usuario);

    do
    {
        //Menu de escolha de operação e mensagem repetivel.
            printf("\nOk %s, qual operacao voce gostaria de utilizar?\n", usuario);
            printf("1. Adicao;\n");
            printf("2. Subtracao;\n");
            printf("3. Multiplicacao;\n");
            printf("4. Divisao;\n");
            printf("5. Porcentagem;\n");
            printf("Lembre-se de escolher a operacao pelo numeral correspondente acima: ", usuario);
            scanf("%i", &operacao);
            printf("\nOtimo, agora vamos escolher os valores para a operacao!\n");

        do
        {
            //Aqui coloquei a opção do usuário poder verificar se os valores escolhidos estão corretos,
            //caso não esteja correto, a calculadora solicitará novos valores.
            printf("\nQual o primeiro valor? X: \n");
            scanf("%f", &valor1);
            printf("Qual o segundo valor? Y: \n");
            scanf("%f", &valor2);
        
            printf("\n%s, os valores escolhidos sao X=%0.2f e Y=%0.2f ? Se estiver correto, digite 1 para continuar: \n", usuario, valor1, valor2);
            scanf("%i", &continuar );
        } while (continuar==0);
        

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
            printf("\n%s por favor, escolha uma das opcoes validas!\n", usuario);
            break;
        }
        //O resultado foi colocado como 0.2 para que exista sempre 2 casas no resultado, assim, evitando números quebrados gigantes.
        printf("\nCalculando.");
        printf("\nCalculando..");
        printf("\nCalculando...");
        printf("\nO resultado da sua operacao e: %0.2f\n", resultado);
        printf("\nGostaria de continuar os calculos, %s? Digite 1 para continuar ou 0 para encerrar!", usuario);
        scanf("%i", &operacao);
        //"while" é utilizado como laço de repetição, qualquer número diferente de 1 irá encerrar a calculadora.
    } while (operacao==1);
    printf("\nObrigado por usar nossos servicos, tenha um otimo dia %s.\n\n", usuario);
}

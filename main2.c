#include <stdio.h>
#include <stdlib.h>

int main()
{
    //calculadora:
    float v1;
    float v2;
    char op;                //pode ser mais, menos, divisao, ou multiplicação
    float resultado;
    int operacao_valida = 1; //caso ela seja 0 significa que é invalida


    printf("Entre com o primeiro valor:");
    while (scanf("%f", &v1) != 1){
        printf("entrada não aceitavel");
        while(getchar() != "\n");
    }

    printf("Entre com a operação desejada:");
    scanf(" %c", &op);   //resolver o valor do teclado onde o buff pegar o caracter do teclado antes da hora, uma dica é talvez da um espaço, ou usar o getchar()

    printf("Entre com o segundo valor:");
    while (scanf("%f", &v2) != 1){
        printf("entrada não aceitavel");
        while(getchar() != "\n");
    }

    if(op == '+'){
        resultado = v1 + v2;
    }
    else if(op == '-'){
        resultado = v1 - v2;
    }
    else if(op == '*'){
        resultado = v1*v2;
    }
    else if(op == '/'){
            if (v2 != 0){
                resultado = v1/v2;
                }else{
                    printf("error: nao pode dividir por zero\n");
                    operacao_valida = 0;
                }
            }
            else{
                printf("operacao invalida.\n");
                operacao_valida = 0;
            }
            if(operacao_valida) {
                printf("o resultado e: %f\n", resultado);
            }
    return 0;
}

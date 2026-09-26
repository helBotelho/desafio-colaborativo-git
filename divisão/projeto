#include <stdio.h>
 
int main() {
    int opcao;
    float num1, num2, resultado;
 
    printf("===== CALCULADORA =====\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
 
    switch (opcao) {
 
        case 4:
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
 
            if (num2 == 0) {
                printf("Erro: divisao por zero nao permitida.\n");
            } else {
                resultado = num1 / num2;
                printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
            }
            break;
 
        default:
            printf("Opcao invalida!\n");
    }
 
    return 0;
}
 

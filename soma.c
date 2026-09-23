#include <stdio.h>

int main() {
    float limite;
    float temperatura;
    float soma = 0;
    float maior = -9999;
    float menor = 9999;
    int quantidade = 0;
    int consecutivas = 0;
    int acimaLimite = 0;
    int continuar = 1;
    int opcao;

    printf("=== SISTEMA DE MONITORAMENTO DE TEMPERATURA ===\n\n");

   
    do {
        printf("Digite o limite de temperatura (-50 a 100): ");
        scanf("%f", &limite);

        if (limite < -50 || limite > 100) {
            printf("Limite invalido! Digite um valor entre -50 e 100.\n");
        }
    } while (limite < -50 || limite > 100);

    printf("\nLimite definido: %.2f C\n", limite);
    printf("O monitoramento sera encerrado automaticamente apos 3 leituras consecutivas acima do limite.\n");

  
    while (continuar == 1 && consecutivas < 3) {

    
        do {
            printf("\nDigite a temperatura lida (-100 a 150): ");
            scanf("%f", &temperatura);

            if (temperatura < -100 || temperatura > 150) {
                printf("Temperatura invalida! Digite um valor entre -100 e 150.\n");
            }
        } while (temperatura < -100 || temperatura > 150);

        soma += temperatura;
        quantidade++;

        if (temperatura > maior) {
            maior = temperatura;
        }
        if (temperatura < menor) {
            menor = temperatura;
        }

        if (temperatura > limite) {
            consecutivas++;
            acimaLimite++;
            printf(">> ATENCAO: temperatura acima do limite! (%d leitura(s) consecutiva(s))\n", consecutivas);

            if (consecutivas == 3) {
                printf("\n!!! 3 TEMPERATURAS CONSECUTIVAS ACIMA DO LIMITE - ENCERRANDO MONITORAMENTO !!!\n");
                break;
            }
        } else {
            consecutivas = 0;
        }

        if (consecutivas < 3) {
            printf("\nDeseja continuar monitorando? (1-Sim / 0-Nao): ");
            scanf("%d", &opcao);
            continuar = opcao;
        }
    }


    printf("\n\n=== RELATORIO FINAL ===\n");
    printf("Quantidade de leituras: %d\n", quantidade);

    if (quantidade > 0) {
        printf("Soma das temperaturas: %.2f C\n", soma);
        printf("Media das temperaturas: %.2f C\n", soma / quantidade);
        printf("Maior temperatura registrada: %.2f C\n", maior);
        printf("Menor temperatura registrada: %.2f C\n", menor);
        printf("Quantidade de leituras acima do limite: %d\n", acimaLimite);
        printf("Percentual de leituras acima do limite: %.2f%%\n", (acimaLimite * 100.0) / quantidade);
    } else {
        printf("Nenhuma leitura valida foi realizada.\n");
    }

    return 0;
}
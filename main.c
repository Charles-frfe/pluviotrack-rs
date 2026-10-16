#include <stdio.h>  // Biblioteca padrão de entrada e saída
#include <stdlib.h> // Biblioteca padrão de funções utilitárias

#define DIAS 3    // Define o número de dias analisados
#define BAIRROS 3 // Define o número de bairros monitorados

int main() {
    // Declaração da matriz e vetores usando as constantes #define
    float chuvas[DIAS][BAIRROS]; // Matriz para armazenar os dados de chuva (mm) por dia e bairro
    char bairros[BAIRROS][30] = {"Centro", "Cruzeiro", "Industrial"}; // Vetor de strings para os nomes dos bairros

    float total_bairro[BAIRROS] = {0}; // Acumulador de chuva por bairro
    float maior_chuva = 0;              // Registro da maior chuva acumulada
    int bairro_pico = 0;                // Índice do bairro com maior acúmulo
    
    // Cabeçalho e Boas-Vindas
    printf("=======================================\n");
    printf("      Sistema PluvioTrack RS           \n");
    printf("  Monitoramento de Chuvas por Bairro   \n");
    printf("=======================================\n\n");

    // 1. LEITURA DOS DADOS (Matriz DIAS x BAIRROS)
    for (int i = 0; i < DIAS; i++) { // Loop para cada dia
        printf("\n--- DIA %d ---\n", i + 1); // Loop para cada bairro
        for (int j = 0; j < BAIRROS; j++) { // Solicita a entrada de dados de chuva para cada bairro
            printf("Chuva no bairro %s (mm): ", bairros[j]); // Prompt para o usuário inserir a quantidade de chuva
            scanf("%f", &chuvas[i][j]); // Armazena o valor inserido na matriz
        }
    }

    // 2. PROCESSAMENTO: Cálculo de totais e identificação do pico
    for (int j = 0; j < BAIRROS; j++) {  // Loop para cada bairro
        for (int i = 0; i < DIAS; i++) { // Loop para cada dia
            total_bairro[j] += chuvas[i][j]; // Acumula a quantidade de chuva para o bairro j ao longo dos dias
        }
        if (total_bairro[j] > maior_chuva) { // Verifica se o total acumulado do bairro j é maior que o maior registrado
            maior_chuva = total_bairro[j]; // Atualiza o maior valor de chuva acumulada
            bairro_pico = j; // Atualiza o índice do bairro com maior acúmulo
        }
    }

    // 3. SAÍDA: Relatório Pluviométrico
    printf("\n========================================\n");
    printf("         RELATORIO PLUVIOMETRICO        \n");
    printf("========================================\n");
    printf("%-15s | %-12s | %-10s\n", "Bairro", "Total (mm)", "Media/Dia"); // Cabeçalho da tabela de relatório
    printf("----------------------------------------\n");

    for (int j = 0; j < BAIRROS; j++) { 
        float media = total_bairro[j] / DIAS; 
        printf("%-15s | %10.1f mm | %8.1f mm\n", bairros[j], total_bairro[j], media); 
    }

    printf("----------------------------------------\n"); 
    printf(">>> DESTAQUE / PICO: Bairro %s com %.1f mm acumulados!\n", //
           bairros[bairro_pico], maior_chuva);
    printf("========================================\n");

    // 4. BÔNUS: Heatmap de Intensidade Pluvial
    printf("\n========================================\n");
    printf("     HEATMAP DE INTENSIDADE PLUVIAL     \n");
    printf("========================================\n");
    printf("Legenda: [.] Leve (<10mm) | [*] Moderada | [#] Intensa (>30mm)\n\n");

    for (int i = 0; i < DIAS; i++) {
        printf("Dia %d: ", i + 1);
        for (int j = 0; j < BAIRROS; j++) {
            float mm = chuvas[i][j];
            
            if (mm < 10) {
                printf("[%s: . ] ", bairros[j]);
            } else if (mm <= 30) {
                printf("[%s: * ] ", bairros[j]);
            } else {
                printf("[%s: # ] ", bairros[j]);
            }
        }
        printf("\n");
    }
    printf("========================================\n");

    return 0;
}
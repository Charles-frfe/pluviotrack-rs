#include <stdio.h> 
#include <stdlib.h> 

#define DIAS 3   
#define BAIRROS 3 

int main() {
    // Declaração da matriz e vetores usando as constantes #define
    float chuvas[DIAS][BAIRROS]; 
    char bairros[BAIRROS][30] = {"Centro", "Cruzeiro", "Industrial"}; 


    float total_bairro[BAIRROS] = {0};
    float maior_chuva = 0;            
    int bairro_pico = 0;                
    
    // Cabeçalho e Boas-Vindas
    printf("=======================================\n");
    printf("      Sistema PluvioTrack RS           \n");
    printf("  Monitoramento de Chuvas por Bairro   \n");
    printf("=======================================\n\n");

    // 1. LEITURA DOS DADOS (Matriz DIAS x BAIRROS)
    for (int i = 0; i < DIAS; i++) { 
        printf("\n--- DIA %d ---\n", i + 1); 
        for (int j = 0; j < BAIRROS; j++) {
            printf("Chuva no bairro %s (mm): ", bairros[j]);
            scanf("%f", &chuvas[i][j]);
        }
    }

    // 2. PROCESSAMENTO: Cálculo de totais e identificação do pico
    for (int j = 0; j < BAIRROS; j++) { 
        for (int i = 0; i < DIAS; i++) {
            total_bairro[j] += chuvas[i][j];
        }
        if (total_bairro[j] > maior_chuva) {
            maior_chuva = total_bairro[j];
            bairro_pico = j;
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
    printf(">>> DESTAQUE / PICO: Bairro %s com %.1f mm acumulados!\n", 
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
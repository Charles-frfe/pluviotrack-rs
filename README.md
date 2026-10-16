# 🌧️ Sistema PluvioTrack RS

O **PluvioTrack RS** é uma aplicação em linguagem C voltada ao monitoramento, processamento e análise estatística de índices pluviométricos (chuvas) no Rio Grande do Sul. 
O sistema armazena dados climáticos em matrizes, processa relatórios formatados e gera uma representação visual por mapa de calor (Heatmap) diretamente no terminal.

---

## 📌 Funcionalidades Principais

- 📊 **Mapeamento de Chuvas:** Registro e processamento de precipitações através de matrizes bidimensionais.
- 📋 **Relatórios Formatados:** Exibição de estatísticas pluviométricas e totais acumulados.
- 🔥 **Terminal Heatmap:** Visualização das intensidades de chuva representadas via terminal.

---

## 🛠️ Tecnologias e Conceitos de C Utilizados

- **Linguagem C:** Implementação em C ANSI / C99.
- **Matrizes (Arrays Bidimensionais):** Armazenamento estruturado de dados pluviométricos por períodos/regiões.
- **Laços de Repetição Aninhados (`for` / `while`):** Varredura de matrizes para cálculo estatístico e impressão do Heatmap.
- **Diretivas de Pré-processador (`#define`):** Configuração de constantes para dimensões e limites.
- **Formatação de Saída (`printf`):** Alinhamento de colunas e uso de códigos de escape ANSI para formatação no terminal.

---

## 🚀 Como Compilar e Executar

### Pré-requisitos
Necessário possuir um compilador C instalado (ex: `gcc` via MinGW no Windows ou nativo no Linux/macOS).

### Compilação
No terminal, execute o comando abaixo para compilar o código fonte:

```bash
gcc main.c -o pluviotrack
```

### Execução
Após compilar, execute o arquivo gerado:

**Windows (PowerShell/CMD):**
```bash
.\pluviotrack.exe
```

**Linux / macOS:**
```bash
./pluviotrack
```

---

## 🖥️ Exemplo de Saída no Terminal

```text
=====================================================
            SISTEMA PLUVIOTRACK RS - RELATÓRIO       
=====================================================

[ Região ]    [ Seg ]   [ Ter ]   [ Qua ]   [ Total ]
  Norte         12.5mm    45.0mm     8.0mm    65.5mm
  Centro         0.0mm    18.2mm    55.0mm    73.2mm
  Sul           30.0mm    12.0mm     2.5mm    44.5mm

-----------------------------------------------------
                   TERMINAL HEATMAP                  
-----------------------------------------------------
Norte  : [░░] [████] [░]
Centro : [  ] [██]   [█████]
Sul    : [██] [░]    [ ]
=====================================================
```

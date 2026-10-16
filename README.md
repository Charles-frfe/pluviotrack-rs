# 🌧️ PluvioTrack RS — Sistema de Monitoramento de Chuvas

> **Atividade Prática 3** — Algoritmos e Programação em Linguagem C  
> Uma aplicação desenvolvida para processar, analisar e visualizar dados pluviais diários por bairro, destacando picos pluviométricos e exibindo um gráfico visual de intensidade (Heatmap).

---

## 📌 Sobre o Projeto

O **PluvioTrack RS** é um programa em linguagem C desenvolvido para simular um sistema de monitoramento meteorológico. Ele permite a entrada de medições pluviométricas em milímetros ($\text{mm}$) organizadas por **dias** e **bairros**, utilizando **matrizes multidimensionais** para o armazenamento e processamento das informações.

O sistema processa os dados digitados e gera automaticamente:
- **Totais de chuva** por bairro ao longo do período analisado.
- **Média diária de precipitação** para cada região.
- **Destaque de Pico Pluvial**, identificando a região com maior volume acumulado.
- **Heatmap de Intensidade Pluvial**, uma representação visual no terminal baseada em caracteres que categoriza as chuvas em *Leve*, *Moderada* ou *Intensa*.

---

## 🛠️ Tecnologias e Conceitos Utilizados

- **Linguagem C**: Estruturação completa em sintaxe padrão C (`C99` / `C11`).
- **Matrizes Multidimensionais (`float chuvas[DIAS][BAIRROS]`)**: Armazenamento dos dados de chuva cruzando $N$ dias por $N$ bairros.
- **Laços de Repetição Aninhados (`for`)**: Leitura da matriz e navegação por colunas para cálculo de acúmulo e varredura do Heatmap.
- **Diretivas de Pré-processamento (`#define`)**: Parametrização do número de dias e bairros no topo do código para facilitar a escalabilidade.
- **Formatação de Saída com `printf`**: Organização dos relatórios em colunas alinhadas (`%-15s`, `%.1f`).

---

## 🚀 Como Executar o Projeto

### Pré-requisitos
Ter um compilador C instalado em sua máquina, como o **GCC** (via MinGW no Windows ou nativo no Linux/macOS), ou utilizar uma IDE como **Visual Studio Code**, **Code::Blocks** ou **Dev-C++**.

### Passo a Passo

1. **Clone o repositório:**
   ```bash
   git clone [https://github.com/SEU-USUARIO/SEU-REPOSITORIO.git](https://github.com/SEU-USUARIO/SEU-REPOSITORIO.git)
   cd SEU-REPOSITORIO

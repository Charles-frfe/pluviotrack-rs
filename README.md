# 🌧️ PluvioTrack RS — Sistema de Monitoramento de Chuvas

[![Language: C](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)

> **Atividade Prática 3** — Algoritmos e Programação Estruturada em Linguagem C  
> Sistema interativo para registrar, calcular e analisar medições pluviométricas por bairro, incluindo cálculo de médias, alertas de pico e um **Heatmap** visual no terminal.

---

## 📌 Sobre o Projeto

O **PluvioTrack RS** é uma aplicação desenvolvida em C para simular o monitoramento e processamento de dados meteorológicos de chuvas em tempo real. 

A partir da entrada de dados informados pelo usuário, o sistema utiliza **matrizes bidimensionais** e **laços de repetição** para organizar as informações de chuva em milímetros ($\text{mm}$) acumuladas ao longo de $N$ dias para $N$ bairros.

### ✨ Funcionalidades Principais
- 📥 **Coleta Organizada de Dados:** Leitura em lote estruturada por dia e bairro através de laços aninhados.
- 📊 **Relatório Estatístico Completo:** Apresentação tabulada contendo o acumulado total de chuva e a média diária de cada região.
- 🚨 **Alerta de Bairro Crítico (Pico Pluvial):** Identificação e destaque automático do bairro que registrou maior volume acumulado.
- 🗺️ **Heatmap de Intensidade (Bônus Visual):** Matriz visual em modo texto que categoriza a intensidade diária da chuva em cada bairro utilizando símbolos.

---

## 🛠️ Tecnologias e Conceitos Utilizados

- **Linguagem C (`C99`/`C11`)**
- **Matrizes Multidimensionais (`float chuvas[DIAS][BAIRROS]`)**: Armazenamento em grade bidimensional ($N \times M$).
- **Laços Aninhados (`for`)**: Estrutura eficiente para leitura, navegação por colunas e renderização de matrizes.
- **Diretivas de Pré-processamento (`#define`)**: Centralização das dimensões da matriz no início do código para facilitar a manutenção e escalabilidade.
- **Formatação Avançada de Saída (`printf`)**: Alinhamento em tabelas com larguras fixas de caracteres.

---

## ⚙️ Como Compilar e Executar

### Pré-requisitos
Necessário ter um compilador de Linguagem C instalado (ex: **GCC**, **Clang**) ou uma IDE configurada (**VS Code**, **Code::Blocks**, **Dev-C++**).

### Passos para execução via Terminal/PowerShell:

1. **Clone o repositório:**
   ```bash
   git clone https://github.com/SEU-USUARIO/NOME-DO-SEU-REPOSITORIO.git
   cd NOME-DO-SEU-REPOSITORIO
   ```

2. **Compile o código-fonte:**
   ```bash
   gcc main.c -o pluvioltrack
   ```

3. **Execute o programa:**
   - **Windows:**
     ```powershell
     .\pluvioltrack.exe
     ```
   - **Linux / macOS:**
     ```bash
     ./pluvioltrack
     ```

---

## 💻 Exemplo de Demonstração no Terminal

```text
=======================================
      Sistema PluvioTrack RS           
  Monitoramento de Chuvas por Bairro   
=======================================

--- DIA 1 ---
Chuva no bairro Centro (mm): 5.0
Chuva no bairro Cruzeiro (mm): 18.5
Chuva no bairro Industrial (mm): 35.0

--- DIA 2 ---
Chuva no bairro Centro (mm): 12.0
Chuva no bairro Cruzeiro (mm): 8.0
Chuva no bairro Industrial (mm): 42.0

--- DIA 3 ---
Chuva no bairro Centro (mm): 2.0
Chuva no bairro Cruzeiro (mm): 25.0
Chuva no bairro Industrial (mm): 10.0

========================================
         RELATORIO PLUVIOMETRICO        
========================================
Bairro          | Total (mm)   | Media/Dia 
----------------------------------------
Centro          |       19.0 mm |      6.3 mm
Cruzeiro        |       51.5 mm |     17.2 mm
Industrial      |       87.0 mm |     29.0 mm
----------------------------------------
>>> DESTAQUE / PICO: Bairro Industrial com 87.0 mm acumulados!
========================================

========================================
     HEATMAP DE INTENSIDADE PLUVIAL     
========================================
Legenda: [.] Leve (<10mm) | [*] Moderada | [#] Intensa (>30mm)

Dia 1: [Centro: . ] [Cruzeiro: * ] [Industrial: # ] 
Dia 2: [Centro: * ] [Cruzeiro: . ] [Industrial: # ] 
Dia 3: [Centro: . ] [Cruzeiro: * ] [Industrial: * ] 
========================================
```

---

## 🎨 Legenda do Heatmap

| Símbolo | Categoria | Volume Pluviométrico |
| :---: | :--- | :--- |
| `[ . ]` | **Chuva Leve** | Abaixo de $10.0\,\text{mm}$ |
| `[ * ]` | **Chuva Moderada** | Entre $10.0\,\text{mm}$ e $30.0\,\text{mm}$ |
| `[ # ]` | **Chuva Intensa / Temporal** | Acima de $30.0\,\text{mm}$ |

---

## 📝 Licença

Este projeto é um trabalho acadêmico livre para consulta e estudos.

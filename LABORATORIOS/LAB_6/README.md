# LAB 6 – Programação Orientada a Objetos (C++)

**Data:** 16/05/2025

Este projeto contém a implementação das questões do sexto laboratório da disciplina de Programação Orientada a Objetos.

O foco deste laboratório é o **uso avançado de operadores em C++**, incluindo sobrecarga de operadores aritméticos, de comparação, de entrada/saída, de incremento e de conversão de tipos.

---

## ✅ QUESTÕES

- **Questão 1 – Classe Polinômio**
    - Implementação de uma classe que representa um polinômio de ordem *n*
    - Sobrecarga dos operadores:
      - Soma: `+`
      - Subtração: `-`
      - Entrada: `>>`
      - Saída: `<<`
    - Programa de testes para validar todas as funcionalidades

- **Questão 2 – Classe Ponto**
    - Representação de um ponto no plano 2D `(x, y)`
    - Sobrecarga dos operadores:
      - Pré-incremento: `++obj`
      - Pós-incremento: `obj++`
    - Programa de testes demonstrando a manipulação dos pontos

- **Questão 3 – Classe Data**
    - Implementação de uma classe para representar uma data no formato `01 de abril de 2022`
    - Sobrecarga dos operadores:
      - Entrada: `>>`
      - Saída: `<<`
      - Pré-incremento: `++obj`
      - Pós-incremento: `obj++`
    - Programa de testes cobrindo entrada, saída e avanço de data

- **Questão 5 – Classe Livro**
    - Criação de uma classe para representar um livro em um **sistema de biblioteca**
    - Discussão sobre as mudanças necessárias para adaptar essa classe para um **sistema de livraria**
    - Implementação simples com atributos básicos como título, autor, ISBN etc.

---

## ⚙️ COMO COMPILAR
### 1. Abra o PowerShell e navegue até a pasta do projeto:

```
cd "CAMINHO\ECOP13A\LAB_5"
```

###  2. Crie o diretório de saída (caso ainda não exista):

    mkdir output    

### 3. Compile os arquivos individualmente com g++ (via MinGW):

g++ main.cpp polinomio.cpp -o output/polinomio.exe
g++ main.cpp ponto.cpp -o output/ponto.exe
g++ main.cpp data.cpp -o output/data.exe
g++ main.cpp livro.cpp -o output/livro.exe


## ▶️ COMO EXECUTAR

Como cada questão tem um main() separado, compile individualmente dentro de um terminal integrado.

### Exemplo

```
g++ main.cpp polinomio.cpp -o output/polinomio.exe
.\output\polinomio.exe
```
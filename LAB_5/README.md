# LAB 5 – Programação Orientada a Objetos (C++)

**Data:** 09/05/2025

Este projeto contém a implementação das questões do quarto 
laboratório da disciplina de Programação Orientada a Objetos.

Este laboratório tem como foco a prática com **classes e objetos** em C++, incluindo a criação de tipos abstratos, operadores, vetores e validações.


## ✅ QUESTÕES

- **Questão 1 – Classe CFracao**
    - Alterações na classe de frações para utilizar sobrecarga de operadores:
    - Operadores aritméticos: +, -, *, /
    - Operadores relacionais: <, >, <=, >=, ==, !=
    - Operadores de entrada e saída: >>, << 
    - Programa de testes cobrindo todas as funcionalidades implementadas

- **Questão 2 – Classe CComplexo**
    - Modificações na classe de números complexos:
    - Sobrecarga dos operadores aritméticos: +, -, *, /
    - Sobrecarga dos operadores relacionais: <, >, <=, >=, ==, !=
    - Entrada e saída com operadores >> e <<
    - Programa de testes cobrindo todas as funcionalidades implementadas

- **Questão 3 – Classe CInteiroLongo**
    - Adaptação da classe que representa números com até 30 dígitos:
    - Sobrecarga dos operadores de comparação: <, >, <=, >=, ==, !=
    - Entrada e saída formatadas com >> e <<
    - Programa de testes completo

---

## ⚙️ COMO COMPILAR
### 1. Abra o PowerShell e navegue até a pasta do projeto:

```
cd "CAMINHO\ECOP13A\LAB_5"
```

###  2. Crie o diretório de saída (caso ainda não exista):

    mkdir output    

### 3. Compile o projeto com g++ (via MinGW):

#### 🔷 Questões 1 – Complexos

 ```
  g++ main.cpp q1.cpp -o output/q1.exe
 ```

### 🔷 Questão 2 – Inteiros


 ```
   g++ main.cpp q2.cpp -o output/q2.exe
 ```

### 🔷 Questão 3 – Triângulos


 ```
   g++ main.cpp q3.cpp -o output/q3.exe
 ```


## ▶️ COMO EXECUTAR

Como cada questão tem um main() separado, compile individualmente dentro de um terminal integrado.

### Exemplo

```
g++ main.cpp q1.cpp -o output/q1.exe
.\output\q1.exe
```
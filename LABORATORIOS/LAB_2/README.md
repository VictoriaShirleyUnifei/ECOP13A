# LAB 2 – Programação Orientada a Objetos (C++)

**Data:** 04/04/2025

Este projeto contém a implementação das questões do segundo 
laboratório da disciplina de Programação Orientada a Objetos.

Este laboratório contém a implementação de exercícios práticos utilizando os conceitos de:
- Funções inline
- Funções por valor e por referência
- Templates
- Vetores dinâmicos com `new` e `delete`
- Classe `std::vector`
- Manipulação de números inteiros e vetores de dígitos


## ⚙️ COMO COMPILAR

### 1. Abra o PowerShell e navegue até a pasta do projeto:

```
cd "CAMINHO\ECOP13A\LAB_2"
```

###  2. Crie o diretório de saída (caso ainda não exista):

    mkdir output    

### 3. Compile o projeto com g++ (via MinGW):

 ```
   g++ main.cpp q1.cpp q2.cpp q3.cpp q4.cpp q5.cpp q6.cpp q7.cpp -o output/programa.exe
 ```

## ▶️ COMO EXECUTAR

Como cada questão tem um main() separado, compile individualmente:

```
g++ q1.cpp -o output/q1.exe
.\output\q1.exe
```
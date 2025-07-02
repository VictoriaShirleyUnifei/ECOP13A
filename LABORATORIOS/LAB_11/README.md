
# LAB 11 – Programação Orientada a Objetos (C++)

**Data:** 27/06/2025

Este projeto contém a implementação das **duas tarefas propostas** no **11º Laboratório** da disciplina de Programação Orientada a Objetos, com foco na utilização da **STL (Standard Template Library)** em **C++**.

---

## ✅ QUESTÕES

### **Questão 1 – Pilha com STL (`<stack>`)**

- Demonstra o uso da classe `stack` da STL.
- Implementa operações básicas de pilha:
  - Inserir elemento (`push`)
  - Remover elemento (`pop`)
  - Verificar tamanho (`size`)
  - Consultar elemento do topo (`top`)
- Menu interativo para executar cada operação até a saída do programa.

Arquivo: `ex01.cpp`

---

### **Questão 2 – Lista Encadeada com STL (`<list>`)**

- Demonstra o uso da classe `list` da STL.
- Implementa operações comuns de lista encadeada:
  - Inserir na frente (`push_front`)
  - Inserir no final (`push_back`)
  - Excluir na frente (`pop_front`)
  - Excluir no final (`pop_back`)
  - Exibir primeiro e último elemento (`front` e `back`)
  - Redimensionar lista (`resize`)
  - Remover elementos específicos (`remove`)
  - Remover duplicatas consecutivas (`unique`)
  - Reverter a lista (`reverse`)
  - Ordenar lista (`sort`)
- Menu interativo para executar as operações até a saída do programa.

Arquivo: `ex02.cpp`

---

## ⚙️ COMO COMPILAR

1. Abra o PowerShell (ou terminal) e navegue até a pasta do projeto:

```
cd "CAMINHO\ECOP13A\LAB_11"
```

2. Crie o diretório de saída (caso ainda não exista):

```
mkdir output
```

3. Compile cada exercício individualmente com **g++**:

```
g++ ex01.cpp -o output/ex01.exe
g++ ex02.cpp -o output/ex02.exe
```

---

## ▶️ COMO EXECUTAR

Como cada questão possui um `main()` separado, execute cada um de forma independente.

**Exemplos:**

```
.\output\ex01.exe
```

```
.\output\ex02.exe
```

---


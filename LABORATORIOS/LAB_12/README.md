
# LAB 12 – Programação Orientada a Objetos (C++)

**Data:** 27/06/2025

Este projeto contém a implementação das **duas tarefas propostas** no **12º Laboratório** da disciplina de Programação Orientada a Objetos, com foco na utilização da **STL (Standard Template Library)** em **C++**.

---

## ✅ QUESTÕES

### **Questão 1 – Heap/Fila de Prioridade com STL (`<queue>`)**

- Demonstra o uso da classe `priority_queue` da STL.
- Implementa operações básicas de uma Heap (máx-heap):
  - Inserir elemento (`push`)
  - Remover elemento do topo (`pop`)
  - Verificar tamanho (`size`)
  - Consultar elemento do topo (`top`)
- Menu interativo para executar cada operação até a saída do programa.

Arquivo: `ex01.cpp`

---

### **Questão 2 – Árvore Binária de Busca Balanceada com STL (`<set>`)**

- Demonstra o uso da classe `multiset` da STL.
- Implementa operações comuns de uma árvore de busca balanceada:
  - Inserir elemento (`insert`)
  - Remover todos os elementos com determinado valor (`erase`)
  - Exibir todos os elementos em ordem crescente (iterações)
  - Consultar tamanho total da árvore (`size`)
  - Remover todos os elementos (`clear`)
  - Consultar quantidade de ocorrências de um valor (`count`)
- Menu interativo para executar as operações até a saída do programa.

Arquivo: `ex02.cpp`

---

## ⚙️ COMO COMPILAR

1. Abra o PowerShell (ou terminal) e navegue até a pasta do projeto:

```
cd "CAMINHO\ECOP13A\LAB_12"
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

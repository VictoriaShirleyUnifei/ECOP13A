
# LAB 10 – Programação Orientada a Objetos (C++)

**Data:** 18/06/2025

Este projeto contém a implementação das **três tarefas propostas** no **10º Laboratório** da disciplina de Programação Orientada a Objetos, com foco no uso de **Templates** em **C++**.

---

## ✅ QUESTÕES

### **Questão 1 – Classe Vetor com Template e Exceções**

- Criação de uma classe `Vetor` utilizando **template**, permitindo trabalhar com diferentes tipos de dados.
- Implementação de **processamento de exceções** para acessar elementos fora do limite.
- Implementação da função membro `Ordena()`, que realiza a ordenação dos elementos do vetor.
- **Restrições:** Para que o tipo do template funcione corretamente com `Ordena()`, o tipo de dado deve suportar os operadores de comparação (`<`, `>`, `==`).

Arquivo: `vetor.h` / `vetor.cpp` (ou `vetor.hpp`)

---

### **Questão 2 – Classe `CPilha` com Template**

- Adaptação da classe `CPilha` desenvolvida em laboratório anterior para usar **template**, permitindo empilhar diferentes tipos de dados.
- Implementação de funções básicas de empilhamento (`push`), desempilhamento (`pop`), e verificação do estado da pilha.

Arquivo: `cpilha.h` / `cpilha.cpp` (ou `cpilha.hpp`)

---

### **Questão 3 – Testes da `CPilha` com Diferentes Tipos**

- Utilização da nova classe `CPilha` com **tipos diferentes**:
  - `CPilha<int>`
  - `CPilha<float>`
  - `CPilha<char>`
  - `CPilha<CPilha<int>>` (pilha de pilhas)
- Programa principal de teste com operações de empilhar e desempilhar para cada tipo.

Arquivo: `main.cpp`

---

## ⚙️ COMO COMPILAR

1. Abra o PowerShell (ou terminal) e navegue até a pasta do projeto:

```
cd "CAMINHO\ECOP13A\LAB_10"
```

2. Crie o diretório de saída (caso ainda não exista):

```
mkdir output
```

3. Compile os arquivos usando **g++**:

```
g++ main.cpp -o output/main.exe
```

---

## ▶️ COMO EXECUTAR

Execute o programa principal no terminal:

```
.\output\main.exe
```


# LAB 9 – Programação Orientada a Objetos (C++)  

**Data:** 13/06/2025

Este projeto contém a implementação das quatro tarefas propostas no **9º Laboratório** da disciplina de Programação Orientada a Objetos, com foco no **tratamento de exceções em C++**.

---

## ✅ QUESTÕES

### **Questão 1 – Classe Polinômio com Exceções de Índice**

- Utilização da classe `Polinomio` do Laboratório 6.
- Foi adicionada verificação de **índice fora do intervalo** na sobrecarga do operador `[]`.
- Caso o acesso ao índice seja inválido, é lançada a exceção `std::out_of_range`.
- Programa de testes interativo incluso para validar o comportamento da exceção.

---

### **Questão 2 – Exceção de Falta de Memória (`std::bad_alloc`)**

- Programa que simula alocação contínua de vetores `double`, sem desalocação.
- A execução eventualmente atinge o limite de memória e lança uma exceção `std::bad_alloc`.
- O programa captura essa exceção e imprime uma mensagem informativa antes de encerrar.

---

### **Questão 3 – Correção da Classe `CPilha`**

- Correção de erros de sintaxe da definição original da classe `CPilha`:
  - Ajustes de maiúsculas/minúsculas (`private`, `public`)
  - Inclusão de `;` ao final das declarações
  - Correção dos parâmetros e da estrutura do construtor
- Implementação dos operadores de entrada (`>>`) e saída (`<<`)
- Implementação do construtor padrão, destrutor, construtor de cópia e operador de atribuição.

---

### **Questão 4 – `CPilha` com Exceções de Overflow e Underflow**

- A classe `CPilha` foi estendida para lançar exceções:
  - `std::overflow_error` quando a pilha está cheia no `push`
  - `std::underflow_error` quando a pilha está vazia no `pop`
- Programa principal de testes incluído:
  - Insere elementos até o limite da pilha
  - Tenta inserir além do limite para acionar `overflow_error`
  - Retira todos os elementos e tenta mais uma vez, para acionar `underflow_error`

---

## ⚙️ COMO COMPILAR
### 1. Abra o PowerShell e navegue até a pasta do projeto:

```
cd "CAMINHO\ECOP13A\LAB_9"
```

###  2. Crie o diretório de saída (caso ainda não exista):

    mkdir output    

### 3. Compile os arquivos individualmente com g++ (via MinGW):

g++ main.cpp q1.cpp -o output/q1.exe
g++ q2.cpp -o output/q2.exe
g++ main.cpp q4.cpp -o q4/q4.exe


## ▶️ COMO EXECUTAR

Como cada questão tem um main() separado, compile individualmente dentro de um terminal integrado.

### Exemplo

```
g++ main.cpp q1.cpp -o output/q1.exe
.\output\q1.exe
```
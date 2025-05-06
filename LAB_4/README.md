# LAB 3 – Programação Orientada a Objetos (C++)

**Data:** 30/04/2025

Este projeto contém a implementação das questões do quarto 
laboratório da disciplina de Programação Orientada a Objetos.

Este laboratório tem como foco a prática com **classes e objetos** em C++, incluindo a criação de tipos abstratos, operadores, vetores e validações.


## ✅ QUESTÕES

- **Questão 1 – Classe `Complexo`:**  
  Criação de uma classe para representar números complexos com:
  - Parte real e imaginária (`double`)
  - Operações: soma, subtração, multiplicação e divisão
  - Construtores com e sem parâmetros
  - Contador de objetos instanciados (variável estática)
  - Cálculo do módulo
  - Impressão no formato `"a + bi"`

- **Questão 2 – Classe `InteiroLongo`:**  
  Classe que representa um número inteiro com até **30 dígitos**, utilizando um vetor para armazenar cada dígito. Implementa:
  - Leitura via teclado
  - Impressão formatada
  - Soma e subtração entre dois objetos
  - Construtor padrão e destrutor
  - Separação em arquivos `.h` e `.cpp`

- **Questão 3 – Classe `TrianguloRetangulo`:**  
  Classe para representar um triângulo retângulo com:
  - Três lados inteiros como atributos
  - Verificação da validade do triângulo
  - Função para imprimir **todos os triângulos retângulos** possíveis com lados inteiros menores que 200

---

## ⚙️ COMO COMPILAR
### 1. Abra o PowerShell e navegue até a pasta do projeto:

```
cd "CAMINHO\ECOP13A\LAB_4"
```

###  2. Crie o diretório de saída (caso ainda não exista):

    mkdir output    

### 3. Compile o projeto com g++ (via MinGW):

#### 🔷 Questões 1 – Complexos

 ```
  g++ main.cpp complexo.cpp -o output/complexo.exe
 ```

### 🔷 Questão 2 – Inteiros


 ```
   g++ main.cpp inteiro.cpp -o output/inteiro.exe
 ```

### 🔷 Questão 3 – Triângulos


 ```
   g++ main.cpp triangulo.cpp -o output/triangulo.exe
 ```


## ▶️ COMO EXECUTAR

Como cada questão tem um main() separado, compile individualmente dentro de um terminal integrado.

### Exemplo

```
g++ main.cpp complexo.cpp -o output/complexo.exe
.\output\complexo.exe
```
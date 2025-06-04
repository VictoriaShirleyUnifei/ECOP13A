# LAB 7 – Programação Orientada a Objetos (C++)

**Data:** 30/05/2025

Este projeto contém a implementação das questões do sétimo laboratório da disciplina de Programação Orientada a Objetos.

O foco deste laboratório é o **uso de herança, polimorfismo e operações matemáticas aplicadas a classes**, além da **adaptação de código para diferentes contextos regionais (como formatos de telefone no Brasil)**.

---

## ✅ QUESTÕES

- **Questão 1 – Hierarquia Político / Presidente / Governador / Prefeito**
    - Implementação de uma hierarquia de classes com herança
    - Cada classe contém:
      - Construtor com mensagem de depuração
      - Método `Imprime()` específico
      - Uso de métodos da classe base nas classes derivadas

- **Questão 2 – Hierarquia Ponto / Círculo / Cilindro**
    - Criação de uma hierarquia geométrica usando herança
    - Implementação de:
      - Construtores e métodos de acesso
      - Operadores `>>` e `<<`
      - Funções `area()` e `volume()` conforme a geometria correspondente
    - Demonstração do uso de herança e especialização

- **Questão 3 – Classe Polinômio e Método de Newton**
    - Extensão da classe `Polinomio` criada no Lab 6
    - Novas funcionalidades:
      - Cálculo da derivada de um polinômio
      - Avaliação do polinômio em um ponto `x`
      - Implementação do **método de Newton** para encontrar uma raiz real
    - Programa de teste interativo com aproximação inicial e número máximo de iterações

- **Questão 4 – Classe PhoneNumber adaptada para o Brasil**
    - Adaptação da classe `PhoneNumber` do livro Deitel
    - Suporte ao formato brasileiro: `(XX) 9XXXX-XXXX`
    - Sobrecarga dos operadores `>>` e `<<` para entrada e saída no novo formato

---

## ⚙️ COMO COMPILAR

### 1. Abra o PowerShell e navegue até a pasta do laboratório:

```
cd "CAMINHO\ECOP13A\LAB_7"
```

### 2. Crie o diretório de saída (caso ainda não exista):

```
mkdir output
```

### 3. Compile os arquivos individualmente com `g++` (via MinGW):

```
g++ q1/main.cpp q1/q1.cpp -o output/q1.exe
g++ q2/main.cpp q2/ponto.cpp q2/circulo.cpp q2/cilindro.cpp -o output/q2.exe
g++ q3/main.cpp q3/polinomio.cpp -o output/q3.exe
g++ q4/main.cpp q4/q4_PhoneNumber.cpp -o output/q4.exe
```

---

## ▶️ COMO EXECUTAR

Como cada questão tem um `main()` separado, execute o programa correspondente:

### Exemplo:

```
.\output\q1.exe
.\output\q2.exe
.\output\q3.exe
.\output\q4.exe
```
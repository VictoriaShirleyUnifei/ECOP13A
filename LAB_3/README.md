# LAB 3 – Programação Orientada a Objetos (C++)

**Data:** 16/04/2025

Este projeto contém a implementação das questões do terceiro 
laboratório da disciplina de Programação Orientada a Objetos.

Este laboratório aborda a aplicação prática dos seguintes conceitos:
- Declaração e implementação de classes
- Encapsulamento e métodos de acesso
- Construtores, destrutores e ponteiros de objetos
- Vetores de objetos e métodos de entrada e saída
- Operações com frações (soma, subtração, comparação, etc.)
- Trigonometria aplicada a polígonos regulares

## ✅ QUESTÕES

- **Questões 1 a 6 – Retângulos:**  
  Implementação da classe `CRetangulo` com métodos para cálculo de área, perímetro, leitura, impressão e verificação de quadrado. Inclui uso de vetor de objetos e ponteiros.

- **Questão 7 – Polígonos Regulares:**  
  Classe que representa polígonos regulares com 3 a 10 lados. Inclui cálculo da área com trigonometria e nomeação do polígono.

- **Questão 8 – Frações:**  
  Classe `CFracao` com operações aritméticas, comparações, conversão para `float` e redução automática.


## ⚙️ COMO COMPILAR
### 1. Abra o PowerShell e navegue até a pasta do projeto:

```
cd "CAMINHO\ECOP13A\LAB_3"
```

###  2. Crie o diretório de saída (caso ainda não exista):

    mkdir output    

### 3. Compile o projeto com g++ (via MinGW):

#### 🔷 Questões 1 a 6 – Retângulos

 ```
  g++ main.cpp retangulo.cpp -o output/retangulos.exe
 ```

### 🔷 Questão 7 – Polígonos


 ```
   g++ main.cpp poligono.cpp -o output/poligono.exe
 ```

### 🔷 Questão 8 – Frações


 ```
   g++ main.cpp fracao.cpp -o output/fracao.exe
 ```


## ▶️ COMO EXECUTAR

Como cada questão tem um main() separado, compile individualmente dentro de um terminal integrado.

### Exemplo

```
g++ main.cpp fracao.cpp -o output/fracao.exe
.\output\fracao.exe
```
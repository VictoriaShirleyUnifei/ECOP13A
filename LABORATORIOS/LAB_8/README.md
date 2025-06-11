# LAB 8 – Programação Orientada a Objetos (C++)

**Data:** 06/06/2025

Este projeto contém a implementação das questões do sétimo laboratório da disciplina de Programação Orientada a Objetos.

O foco deste laboratório é o **uso de herança, polimorfismo e classes abstratas em C++**, incluindo o uso de ponteiros para a classe base, sobrescrita de métodos virtuais, e estruturas de hierarquia de classes.



---

## ✅ QUESTÕES

- **Questão 1 – Hierarquia Político / Presidente / Governador / Prefeito**
    - Implementação de classes para representar políticos em diferentes cargos
    - Criação de objetos via menu e armazenamento em vetor de ponteiros para a classe base Politico
    - Impressão de todos os objetos criados usando loop
    - Demonstração prática de herança

- **Questão 2 – Hierarquia Ponto / Círculo / Cilindro**
    - Implementação de classes geométricas com métodos area() e volume()
    - Uso da sobrescrita e do polimorfismo com métodos virtuais
    - Operadores de entrada (>>) e saída (<<) sobrecarregados para cada classe
    - Programa de testes demonstrando entrada e saída de dados para objetos

- **Questão 3 – Criação Dinâmica e Impressão com Vetor de Ponteiros**
    - Permite que o usuário crie objetos da hierarquia Ponto/Círculo/Cilindro dinamicamente
    - Utiliza vector<Ponto*> para armazenar os objetos
    - Impressão dos objetos com área e volume por meio de polimorfismo
    - Liberação correta da memória com delete

- **Questão 4 – Aplicação de Polimorfismo nas Funções area() e volume()**
    - Métodos area() e volume() foram tornados virtuais na classe base
    - Programa da Questão 3 reexecutado para verificar o comportamento polimórfico
    - Demonstração de chamada correta aos métodos sobrescritos nas classes derivadas

---

## ⚙️ COMO COMPILAR

### 1. Abra o PowerShell e navegue até a pasta do laboratório:

```
cd "CAMINHO\ECOP13A\LAB_8"
```

### 2. Crie o diretório de saída (caso ainda não exista):

```
mkdir output
```

### 3. Compile os arquivos individualmente com `g++` (via MinGW):

```
g++ main.cpp q1.cpp -o output/q1.exe
g++ main.cpp q2.cpp -o output/q2.exe
g++ main.cpp q3.cpp -o output/q3.exe
g++ main.cpp q4.cpp -o output/q4.exe
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

# LAB 1 – Programação Orientada a Objetos (C++)

**Data:** 28/03/2025

Este projeto contém a implementação das questões do primeiro 
laboratório da disciplina de Programação Orientada a Objetos.

Cada questão foi separada em um arquivo `.cpp`, e o programa 
principal (`q3.cpp`) exibe um menu interativo para executar 
qualquer questão individualmente.


## ⚙️ COMO COMPILAR

### 1. Abra o PowerShell e navegue até a pasta do projeto:

   cd "C:\Users\victo\Documents\Cursos\Unifei\Sistemas de Informação\3º Período\Programação Orientada a Objetos\ECOP13A\LAB_1"

###  2. Crie o diretório de saída (caso ainda não exista):

    mkdir output    

### 3. Compile o projeto com g++ (via MinGW):

 ```
   g++ q3.cpp q1.cpp q2.cpp q5.cpp q6.cpp q7.cpp q8.cpp q9.cpp -o output/programa.exe
 ```

## ▶️ COMO EXECUTAR

      .\output\programa.exe

## 📝 OBSERVAÇÕES

- Apenas um arquivo deve conter a função `main()`, normalmente `q3.cpp`.
- Os outros arquivos (`q1.cpp`, `q2.cpp`, etc.) devem conter apenas 
  uma função `void qX()` correspondente à sua questão.
- Se alguma questão for implementada diretamente no `q3.cpp` (como 
  a questão 4, por exemplo), não inclua um `q4.cpp` na compilação.
- No topo do `q3.cpp`, declare todas as funções com `void q1();`, etc.


#include <iostream>
using namespace std;

void q1() {
    cout << "Executando Questão 1" << endl;
    // Código do Questão 1
}

void q2() {
    cout << "Executando Questão 2" << endl;
    // Código do Questão 2
}

void q3() {
    cout << "Executando Questão 3" << endl;
    // Código do Questão 3
}

void q4() {
    cout << "Executando Questão 4" << endl;
    // Código do Questão 4
}

void q5() {
    cout << "Executando Questão 5" << endl;
    // Código do Questão 5
}

void q6() {
    cout << "Executando Questão 6" << endl;
    // Código do Questão 6
}

void q7() {
    cout << "Executando Questão 7" << endl;
    // Código do Questão 7
}

void q8() {
    cout << "Executando Questão 8" << endl;
    // Código do Questão 8
}

void q9() {
    cout << "Executando Questão 9" << endl;
    // Código do Questão 9
}

int main() {
    int opcao;

    while (true) {
        cout << "Menu de Opções:" << endl;
        cout << "1. Questão 1" << endl;
        cout << "2. Questão 2" << endl;
        cout << "3. Questão 3" << endl;
        cout << "4. Questão 4" << endl;
        cout << "5. Questão 5" << endl;
        cout << "6. Questão 6" << endl;
        cout << "7. Questão 7" << endl;
        cout << "8. Questão 8" << endl;
        cout << "9. Questão 9" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                q1();
                break;
            case 2:
                q2();
                break;
            case 3:
                q3();
                break;
            case 4:
                q4();
                break;
            case 5:
                q5();
                break;
            case 6:
                q6();
                break;
            case 7:
                q7();
                break;
            case 8:
                q8();
                break;
            case 9:
                q9();
                break;
            case 0:
                cout << "Saindo..." << endl;
                return 0;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }
    }

    return 0;
}
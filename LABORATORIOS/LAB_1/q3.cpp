#include <iostream>
using namespace std;

void q1();
void q2();
void q5();
void q6();
void q7();
void q8();
void q9();

int main() {
    int opcao;
    while (true) {
        cout << "\nMenu de Opcoes:\n";
        cout << "1. Questao 1\n";
        cout << "2. Questao 2\n";
        cout << "3. Questao 3\n";
        cout << "4. Questao 4\n";
        cout << "5. Questao 5\n";
        cout << "6. Questao 6\n";
        cout << "7. Questao 7\n";
        cout << "8. Questao 8\n";
        cout << "9. Questao 9\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opcao:\n";
        cin >> opcao;

        switch (opcao) {
            case 1: 
                cout << "\nRodando Questao 1:" << endl;
                q1(); 
                break;
            case 2: 
                cout << "\nRodando Questao 2:" << endl;
                q2(); 
                break;
            case 3: break;
            case 4: 
                cout << "\nRodando Questao 3:" << endl;
                cout << "Resposta: 64" << endl;
                break;
            case 5: 
                cout << "\nRodando Questao 5:" << endl;
                q5(); 
                break;
            case 6: 
                cout << "\nRodando Questao 6:" << endl;
                q6(); 
                break;
            case 7: 
                cout << "\nRodando Questao 7:" << endl;
                q7(); 
                break;
            case 8: 
                cout << "\nRodando Questao 8:" << endl;
                q8(); 
                break;
            case 9: 
                cout << "\nRodando Questao 9:" << endl;
                q9(); 
                break;
            case 0: cout << "Saindo...\n"; return 0;
            default: cout << "Opçao invalida.\n"; break;
        }
    }
}

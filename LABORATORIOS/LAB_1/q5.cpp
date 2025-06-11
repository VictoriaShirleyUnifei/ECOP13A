#include <iostream>

using namespace std;

int q5() 
{
    int largura, altura;
    char borda, preenchimento;
    char opcao;

    cout << "Digite a largura do retangulo: ";
    cin >> largura;

    cout << "Digite a altura do retangulo: ";
    cin >> altura;

    cout << "Digite o caractere para a borda: ";
    cin >> borda;

    cout << "Digite o caractere para o preenchimento: ";
    cin >> preenchimento;

    cout << "Deseja que o retangulo seja preenchido? (s/n): ";
    cin >> opcao;

    bool preenchido = (opcao == 's' || opcao == 'S');

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            if (i == 0 || i == altura - 1 || j == 0 || j == largura - 1) {
                cout << borda;
            } else {
                cout << (preenchido ? preenchimento : ' ');
            }
        }
        cout << endl;
    }

    return 0;
}

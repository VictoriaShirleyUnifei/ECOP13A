#include <iostream>
#include <vector>
#include <new> // Para std::bad_alloc

using namespace std;

int main() {
    vector<double*> blocos; // Guarda os ponteiros para manter a memória alocada
    const size_t tamanho = 100000000; // Tamanho do vetor (ajuste conforme necessário)
    int contador = 0;

    try {
        while (true) {
            double* bloco = new double[tamanho]; // Aloca um grande bloco
            blocos.push_back(bloco); // Armazena para não desalocar
            contador++;
            cout << "Bloco #" << contador << " alocado com sucesso." << endl;
        }
    } catch (const bad_alloc& e) {
        cerr << "\nExceção capturada: " << e.what() << endl;
        cerr << "Falha na alocação após " << contador << " blocos." << endl;
    }

    // Opcional: desalocar a memória no final, se quiser
    // for (double* ptr : blocos) {
    //     delete[] ptr;
    // }

    return 0;
}

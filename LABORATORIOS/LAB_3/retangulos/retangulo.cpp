#include "retangulo.h"

using namespace std;

CRetangulo::CRetangulo(int largura, int altura)
{
    setLargura(largura);
    setAltura(altura);

    cout << "Criando objeto retangulo...\n" << endl;
}

CRetangulo::CRetangulo(const CRetangulo& r)
{
    largura = r.largura;
    altura = r.altura;

    cout << "Criando copia do retangulo..." << endl;
}

CRetangulo::~CRetangulo()
{
    cout << "Destruindo objeto retangulo..." << endl;
}


void CRetangulo::setLargura(int l)
{
    if((l < 1) || (l > 20))
        largura = 1;
    else   
        largura = l;
}

void CRetangulo::setAltura(int a)
{
    if((a < 1) || (a > 20))
        altura = 1;
    else   
        altura = a;
}

bool CRetangulo::ehQuadrado()
{
    return (largura == altura) ? 1 : 0;
}

void CRetangulo::leitura()
{
    int l, a;
    cout << "Entre com a largura: ";
    cin >> l;
    cout << "Entre com a altura: ";
    cin >> a;

    setLargura(l);
    setAltura(a);
}

int CRetangulo::imprime()
{
    cout << "Largura: " << largura << ", Altura: " << altura << endl;
    cout << "Area: " << area() << ", Perimetro: " << perimetro() << endl;
    cout << (ehQuadrado() ? "Eh um quadrado." : "Nao eh um quadrado.") << endl;
    return 0;
}

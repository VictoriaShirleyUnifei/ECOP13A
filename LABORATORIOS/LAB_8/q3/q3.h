// q2.h
#ifndef Q3_H
#define Q3_H

#include <iostream>
using namespace std;

class Ponto {
protected:
    double x, y;

public:
    Ponto(double x = 0.0, double y = 0.0);
    virtual ~Ponto() {}
    
    double getX() const;
    double getY() const;
    void setX(double);
    void setY(double);

    virtual double area() const;
    virtual double volume() const;

    friend istream& operator>>(istream&, Ponto&);
    friend ostream& operator<<(ostream&, const Ponto&);
};

class Circulo : public Ponto {
protected:
    double raio;

public:
    Circulo(double x = 0.0, double y = 0.0, double r = 1.0);
    
    double getRaio() const;
    void setRaio(double);

    double area() const override;
    double volume() const override;

    friend istream& operator>>(istream&, Circulo&);
    friend ostream& operator<<(ostream&, const Circulo&);
};

class Cilindro : public Circulo {
private:
    double altura;

public:
    Cilindro(double x = 0.0, double y = 0.0, double r = 1.0, double h = 1.0);
    
    double getAltura() const;
    void setAltura(double);

    double area() const override;
    double volume() const override;

    friend istream& operator>>(istream&, Cilindro&);
    friend ostream& operator<<(ostream&, const Cilindro&);
};

#endif

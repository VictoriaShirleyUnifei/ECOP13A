#ifndef COMPLEXO_H
#define COMPLEXO_H

class Complexo {
    double real, imaginario;

    public:
        Complexo(double = 0, double = 0);
        ~Complexo();

        double getReal() const {return real;}
        double getImaginario() const {return imaginario;}
        Complexo& setReal(double r) {
            real = r;
            return *this;
        }
        Complexo& setImaginario(double i){
            imaginario = i;
            return *this;
        }

        Complexo somar(const Complexo&) const;
        Complexo subtrair(const Complexo&) const;
        Complexo multiplicar(const Complexo&) const;
        Complexo dividir(const Complexo&) const;

        private:
            static int contator;
        public:
            static int getContador(){
                return contator;
            }
            double modulo() const;
            void imprime() const;
};

// class Complexo
// {
//     private: 
//         double real, imaginario;
//         static int n;
    
//     public:
//         Complexo() {
//             real = 1;
//             imaginario = 1;
//             n++;
//         }

//         Complexo(double a, double b) {
//             real = a;
//             imaginario = b;
//             n++;
//         }

//         Complexo(const Complexo& c)
//         {
//             real = c.real;
//             imaginario = c.imaginario;
//         }

//         ~Complexo() {n--;}

//         Complexo somar(Complexo);
//         Complexo subtrair(Complexo);
//         Complexo multiplicar(Complexo);
//         Complexo dividir(Complexo);

//         void setReal(double a) {real = a;}
//         void setImaginario(double a) {imaginario = a;}
//         double getReal() {return real;}
//         double getImaginario() {return imaginario;}
//         int getObjetos() {return n;}

//         double modulo();
//         void print();
// };

#endif
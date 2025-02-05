#ifndef OPERACOESMATEMATICAS_H_INCLUDED
#define OPERACOESMATEMATICAS_H_INCLUDED
#include "Calculadora.h"

class Calculadora {
    // isso está correto ou é melhor utilizar um método get??
    protected:
        double primeiroOperando;
        double segundoOperando;
    public:
        Calculadora(double primeiroOperando, double segundoOperando);

        virtual double multiplicacao();
};

#endif // OPERACOESMATEMATICAS_H_INCLUDED
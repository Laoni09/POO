#ifndef CALCULADORAADICAO_H_INCLUDED
#define CALCULADORAADICAO_H_INCLUDED
#include "Calculadora.h"

class CalculadoraAdicao: public Calculadora {
    public:
        CalculadoraAdicao(double primeiroOperando, double segundoOperando): Calculadora(primeiroOperando, segundoOperando) {};

        double adicao();
        double multiplicacao() override;
};

#endif // CALCULADORAADICAO_H_INCLUDED
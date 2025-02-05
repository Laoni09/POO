#include "Calculadora.h"

Calculadora::Calculadora(double primeiroOperando, double segundoOperando)
{
    this->primeiroOperando = primeiroOperando;
    this->segundoOperando = segundoOperando;
}

double Calculadora::multiplicacao()
{
    return primeiroOperando * segundoOperando;
}

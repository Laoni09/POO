#include "CalculadoraAdicao.h"

double CalculadoraAdicao::adicao()
{
    return this->primeiroOperando + this->segundoOperando;
    
}

double CalculadoraAdicao::multiplicacao()
{
    double resultado = 0;
    for(int i = 0; i < this->primeiroOperando; i++) {
        resultado += this->adicao();
    }
    return resultado;
}

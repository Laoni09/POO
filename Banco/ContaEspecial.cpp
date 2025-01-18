#include "ContaEspecial.h"

void ContaEspecial::debitar(double valor) {

    if (valor <= (getSaldo()+limiteCredito))
        setSaldo(getSaldo() - valor);
}

double ContaEspecial::getLimite() {
    return limiteCredito;
}

int ContaEspecial::qualquer(){
    return 2 + Conta::qualquer();
}

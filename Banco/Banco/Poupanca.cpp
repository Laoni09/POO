#include "Poupanca.h"



void Poupanca::setTaxaJuros(double tx) {
    taxa = tx;

}

double Poupanca::getTaxaJuros() {

    return taxa;
}
void Poupanca::renderJuros() {

    creditar(getSaldo()*taxa);

}

Poupanca::Poupanca(string num, string ag,double tx):Conta(num,ag) {
    taxa = tx;
}



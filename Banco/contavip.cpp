#include "contavip.h"



void ContaVIP::renderBonus() {
    if (getSaldo() >= saldoMinimo) {
        creditar(saldoMinimo * 0.1);
    }
}

//ex3
void ContaVIP::creditar(double valor) {
    if (valor >= 5000) {
        setSaldo(getSaldo() + valor);
    }
}

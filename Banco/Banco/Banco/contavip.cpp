#include "contavip.h"
#include "Conta.h"

// coloquei o operador de escopo pra chamar o creditar da classe base
void ContaVIP::renderBonus() {
    if (getSaldo() >= saldoMinimo) {
        this->Conta::creditar(saldoMinimo * 0.1);
    }

}

// ex3
void ContaVIP::creditar(double valor)
{
    if (valor >= 5000) {
        setSaldo(getSaldo() + valor);
    }
}

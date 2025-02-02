#ifndef CONTAVIP_H
#define CONTAVIP_H

#include "Conta.h"


class ContaVIP : public Conta
{
    public:
        ContaVIP(string num, string ag,double minimo):Conta(num,ag) {saldoMinimo = minimo;}

        double GetsaldoMinimo() { return saldoMinimo; }
        void SetsaldoMinimo(double val) { saldoMinimo = val; }
        void renderBonus();
        // ex3
        void creditar(double valor);
    protected:
    private:
        double saldoMinimo;
};

#endif // CONTAVIP_H

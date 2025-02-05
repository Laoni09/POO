#ifndef CONTAESPECIAL_H_INCLUDED
#define CONTAESPECIAL_H_INCLUDED
#include "Conta.h"

class ContaEspecial: public Conta {
    private:
        double limiteCredito;
    public:
        void debitar(double valor); // ex 1
        ContaEspecial(string num, string ag, double limite):Conta(num,ag) {
            limiteCredito = limite;
        }
        double getLimite();
        int qualquer();
};

#endif // CONTAESPECIAL_H_INCLUDED

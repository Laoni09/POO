#ifndef POUPANCA_H_INCLUDED
#define POUPANCA_H_INCLUDED
#include "Conta.h"

class Poupanca:public Conta {
    private:
    double taxa;
    public:
        void setTaxaJuros(double tx);
        double getTaxaJuros();
        void renderJuros();
        Poupanca(string num, string ag,double tx);

};


#endif // POUPANCA_H_INCLUDED

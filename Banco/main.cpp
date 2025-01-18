#include <iostream>
#include "Conta.h"
#include "Poupanca.h"
#include "ContaEspecial.h"
#include "BancoD.h"
#include "contavip.h"

double retornaSaldo(Conta* c) {
    return c->getSaldo();
}

int main()
{
   Conta* c = new Conta("1234-5","456-7",200);
    Poupanca* p = new Poupanca("1234-6","456-7",0.01);
    c->creditar(4000);

    cout << "Conta " <<c->getNumero()<<" tem saldo = " <<c->getSaldo()<<" reais"<< endl;
    c->debitar(1000);

   // cout << "Agencia: "<<c->agencia<<endl;
     cout << "Conta " <<c->getNumero()<<" tem saldo = " <<c->getSaldo()<<" reais"<< endl;
    p->creditar(4000);
    cout << "Poupanca " <<p->getNumero()<<" tem saldo = " <<p->getSaldo()<<" reais"<< endl;
    p->debitar(1000);
   // cout << "Agencia: "<<c->agencia<<endl;
    cout << "Poupanca " <<p->getNumero()<<" tem saldo = " <<p->getSaldo()<<" reais"<< endl;
    p->renderJuros();
    cout << "Poupanca " <<p->getNumero()<<" tem saldo = " <<p->getSaldo()<<" reais"<< endl;

    //ex2
    Conta* c2 = new ContaVIP("1235-6","456-7",60000);
    c2->creditar(7000);
    (dynamic_cast<ContaVIP*>(c2))->renderBonus();
    c2->creditar(70000);
    cout << "Conta VIP " <<c2->getNumero()<<" tem saldo = " <<c2->getSaldo()<<" reais"<< endl;
    (dynamic_cast<ContaVIP*>(c2))->renderBonus();
    cout << "Conta VIP " <<c2->getNumero()<<" tem saldo = " <<c2->getSaldo()<<" reais"<< endl;

  BancoD* banco = new BancoD(20);
    banco->cadastrar(c);
    banco->cadastrar(p);
    int numero;
    for (numero = 0; numero < banco->qtdContas();numero++)
        cout << "Conta " <<banco->getConta(numero)->getNumero()<< endl;

    ContaEspecial ce2("1235-7","456-7",1000);
    Conta conta = ce2;
    conta.debitar(700);
    cout << "Conta Especial " <<conta.getNumero()<<" tem saldo = " <<conta.getSaldo()<<" reais"<< endl;

    return 0;
}

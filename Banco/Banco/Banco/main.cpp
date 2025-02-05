// NO ARQUIVO README HÁ CONSIDERAÇÕES SOBRE CADA EXERCÍCIO, EXPLICANDO O QUE FIZ.


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
    ContaVIP* cVIP = new ContaVIP("1235-6","456-7",60000);

    // ex1 - polimorfismo por substituição
    Conta* conta1 = new ContaEspecial("1234-5", "456-7", 5000);
    conta1->debitar(200);
    cout << conta1->getSaldo() << endl;
    delete conta1;

    // ex2 - cast dinâmico
    Conta* c2 = new ContaVIP("1235-6", "456-7", 60000);
    c2->creditar(7000);
    (dynamic_cast<ContaVIP*>(c2))->renderBonus();
    c2->creditar(70000);
    cout << "Conta VIP " <<c2->getNumero()<<" tem saldo = " <<c2->getSaldo()<<" reais"<< endl;
    (dynamic_cast<ContaVIP*>(c2))->renderBonus();
    cout << "Conta VIP " <<c2->getNumero()<<" tem saldo = " <<c2->getSaldo()<<" reais"<< endl;
    delete c2;

    // ex3 - polimorfismo por redefinição
    Conta* conta3 = new ContaVIP("1235-6", "456-7", 60000);
    conta3->creditar(6000);
    cout << conta3->getSaldo() << endl;
    delete conta3;

    // ex4 - uso do this
    ContaEspecial ce2("1235-7","456-7",1000);
    Conta conta = ce2;
    conta.debitar(700);
    cout << "Conta Especial " <<conta.getNumero()<<" tem saldo = " <<conta.getSaldo()<<" reais"<< endl;
    ce2.compararSaldo(2000);
    return 0;

  BancoD* banco = new BancoD(20);
    banco->cadastrar(c);
    banco->cadastrar(p);
    int numero;
    for (numero = 0; numero < banco->qtdContas();numero++)
        cout << "Conta " <<banco->getConta(numero)->getNumero()<< endl;


   /* Dynamic Binding */

/*   ContaEspecial* ce = new ContaEspecial("1234-7","456-7",1000);
    Conta* c2 = ce;
    c2->debitar(200);
    cout << "Conta Especial " <<c2->getNumero()<<" tem saldo = " <<c2->getSaldo()<<" reais"<< endl;
    ce->debitar(400);
    cout << "Conta Especial " <<ce->getNumero()<<" tem saldo = " <<ce->getSaldo()<<" reais"<< endl;

  //   cout <<ce->qualquer()<<endl;
*/


  /* Cast */

 /*   Conta* c4 = p;
    (dynamic_cast<Poupanca*> (c4))->setTaxaJuros(0.02);
    (dynamic_cast<Poupanca*> (c4))->renderJuros();
    Poupanca* p1 = dynamic_cast<Poupanca*>(c);
    if (p1 != NULL) {
        p1->renderJuros();
        cout << "Poupanca " <<p1->getNumero()<<" tem saldo = " <<p1->getSaldo()<<" reais"<< endl;
    }
    cout << "Conta " <<c4->getNumero()<<" tem saldo = " <<c4->getSaldo()<<" reais"<< endl;

*/

}

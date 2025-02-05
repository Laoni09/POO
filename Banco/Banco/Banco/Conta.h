#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED
#include <string>
using namespace std;
class Conta {
    private:
        double saldo;
        string numero;
        string agencia;
    public:
        double getSaldo();

        virtual void creditar(double valor); // ex3
        virtual void debitar (double valor); // ex1
        void compararSaldo(double saldo); // ex4
        Conta(string num, string ag);
     //   Conta() {saldo = 10;}
        Conta (string numero, string agencia, double valor);
        string getNumero();
        string getAgencia();
      /*  int teste(char c);
        int teste(int c);
      */

    protected:
            void setSaldo(double valor);
            virtual int qualquer();
};


#endif // CONTA_H_INCLUDED

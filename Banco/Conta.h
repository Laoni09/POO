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

        virtual void creditar(double valor); //coloquei virtual para o ex3
        virtual void debitar (double valor); //aqui o virtual já tava
        Conta(string num, string ag);
     //   Conta() {saldo = 10;}
        Conta (string numero, string agencia, double valor);
        virtual ~Conta() {} // Destrutor virtual para o ex2
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

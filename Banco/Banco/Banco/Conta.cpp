
#include "Conta.h"
#include <iostream>

Conta::Conta(string num,string ag){
    numero = num;
    agencia = ag;
    saldo = 0;

}

 Conta::Conta (string numero, string agencia, double valor) {
    this->numero = numero;
    this->agencia = agencia;
    saldo = valor;
 };

double Conta::getSaldo() {
    return saldo;
}

void Conta::creditar(double valor) {
    saldo = saldo + valor;
}

void Conta::debitar(double valor) {
    if (valor <= saldo)
        saldo = saldo - valor;
}

// ex4
void Conta::compararSaldo(double saldo)
{
    if (this->saldo > saldo)
        cout << "O maior saldo e " << this->saldo << endl;
    else if (saldo > this->saldo)
        cout << "O maior saldo e " << saldo << endl;
    else 
        cout << "Os saldos sao iguais!" << endl;
}

string Conta::getNumero()
{
    return numero;
}

string Conta::getAgencia() {
    return agencia;
}

void Conta::setSaldo(double valor) {
    saldo = valor;
}


/*int Conta::teste (int c) {
    return (c + 1);
}
int Conta::teste (char c) {
    return c;
}
*/

int Conta::qualquer() {
   return 1;
}





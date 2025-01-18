#include <string.h>
#include "Conta.h"
void Conta::creditar(double v){
  saldo = saldo + v;
}

void Conta::debitar(double v){
  if (v <= saldo)
    saldo = saldo - v;
}

double Conta::getSaldo(){
  return saldo;
}

Conta::Conta(char *num, char* ag) {
  strcpy(numero, num);
  strcpy(agencia, ag);
  saldo = 0;
}

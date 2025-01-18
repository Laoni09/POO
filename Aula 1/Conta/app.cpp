#include <iostream>
#include "Conta.h"
using namespace std;
int main() {
  Conta *c;
  char numero [] = "1234-5";
  char agencia [] = "007-x";
  c = new Conta(numero, agencia); // new: Comando para criar objeto de uma classe em tempo de execução (dinamicamente)
  if (c == NULL){
    printf("Erro na criação do objeto!");
  } else {
    c->creditar(300);
    cout<<"Conta tem saldo = " << c->getSaldo() << endl;
    c->debitar(200);
    cout<<"Conta tem saldo = " << c->getSaldo() << endl; //Para imprimir na tela
  }
  return 0;
}
